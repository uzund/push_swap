/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 17:37:55 by duzun            ###   ########.fr       */
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
	ft_print_lst(*stack); // silmeyi unutma
}

void	ft_print_lst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->data, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}


int	ft_master_check(char **arraytmp, char *ssum, int words)
{
	char	**arg;
	int		check;
	int		i;

	check = 1;
	arg = arraytmp;
	printf("ft_sum : %s\n", ssum);
	i = -1;
	while (arg[++i])
	{
		printf("arg[%d] değeri :%s\n", i, arg[i]);
		check = ft_check_number(arg[i]);
		check = ft_check_null(arg[i]);
		if (!check)
		{
			printf("Erorr! number :%d\n", check);
			printf("words :%d\n", words);
			return (0);
		}
		// words += ft_count_words(arg[i]);
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

void	ft_start_sort(char **arraytmp, int words)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_first_stack(stack_a, words, arraytmp);
	ft_sort_master(stack_a, stack_b);
	ft_print_lst(*stack_a); // silmeyi unutma
}

int	ft_words(char **av)
{
	int	i;
	int	words;

	words = 0;
	i = -1;
	while (av[++i])
		words += ft_count_words(av[i]);
	return (words);
}

int	ft_null_argv_chack(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0)
			return (0);
		else if (ft_strlen(av[i]) == ft_strnspn(av[i], " "))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	**arraytmp;
	char	*ssum;
	int		check;
	int		words;

	if (ac > 1)
	{
		if (ft_null_argv_chack(av) == 1)
		{
			words = ft_words(av);
			ssum = ft_sum(av);
			// printf("karakter diziai %s", ssum);
			arraytmp = ft_split(ssum);
			check = ft_master_check(arraytmp, ssum, words);

			if (!check)
			{
				write(2, "Error! Check\n", 13);
				return (0);
			}
			else
			{
				ft_start_sort(arraytmp, words -1);
				printf("Kontrol Başaralı\n");
			}
		}
		else
		{
			write(2, "Error!\n", 7);
			return (0);
		}
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}
