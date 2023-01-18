/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/18 21:47:08 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // close

static void	ft_sort_master(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		ft_easy_sort(stack_a, stack_b);
	else
		ft_radix_sort(stack_a, stack_b);
}

static void	ft_first_stack(t_list **stack, int count, char **av)
{
	t_list	*new;
	char	**args;
	int		i;

	args = av;
	i = 0;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	ft_stack_index(stack);
	if (count == 2)
		ft_free(args);
}

int	ft_master_check(char **s)
{
	char	**arg;
	char	**arraytmp;
	char	*ssum;
	int		words;
	int		check;
	int		i;

	arg = s;
	check = 0;
	words = 0;
	i = 0;
	
	ssum = ft_sum(arg);
	i = -1;

	// check = ft_check_null(&ssum[i]);
	// if (check == 0)
	// 	return (0);

	printf("ft_sum : %s\n", ssum);
	arraytmp = ft_split(ssum);
	arg = arraytmp;
	i = -1;
	while (arg[++i])
	{
		check = ft_check_number(arg[i]);
		// check = ft_check_null(arg[i]);
		if (!check)
		{
			printf("Erorr! number :%d\n", check);
			printf("words :%d\n", words);
			return (0);
		}
		words += ft_count_words(arg[i]);
	}
	printf("Temiz string :%d\n", words);
	printf("Total words :%d\n", words);
	if (words <= 1)
		check = 0;
	else
	{
		check = ft_check_minmax(arraytmp);
		check = ft_check_duplicate(arraytmp);
	// }
	// if (check * words != 0)
	// {
		printf("-- > Rakam sayısı : %d\n", words);
		
		
	}
	return (check * words);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	
	// float	*arraya;
	// int	*arrayb;
	char	**arraytmp;
	char	*ssum;
	char	**s;
	int		i;
	int		check;
	int		words;

	if (ac > 1)
	{
		i = 0;
		words = 0;
		s = av;
		ssum = ft_sum(av);
		arraytmp = ft_split(ssum);
		i = -1;
		while (s[++i])
		{
			words += ft_count_words(av[i]);
		}
		check = ft_master_check(s);
		if (!check)
		{
			write(2, "Error! Check\n", 13);
			return (0);
		}
		else
		{
			stack_a = (t_list **)malloc(sizeof(t_list));
			stack_b = (t_list **)malloc(sizeof(t_list));
			*stack_a = NULL;
			*stack_b = NULL;
			ft_first_stack(stack_a, words, arraytmp);
			ft_sort_master(stack_a, stack_b);

			printf("Kontrol Başaralı\n");
		}
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}