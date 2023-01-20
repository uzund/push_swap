/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 20:00:35 by duzun            ###   ########.fr       */
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

int	ft_master_check(char **arraytmp, int words)
{
	char	**arg;
	int		check;
	int		i;

	check = 1;
	arg = arraytmp;
	if (words <= 1)
		return (0);
	else
	{
		i = -1;
		while (arg[++i])
		{
			if (!(ft_check_number(arg[i]) || !(ft_check_sign(arg[i]))))
				return (0);
		}
		if (!(ft_check_minmax(arraytmp) || !(ft_check_duplicate(arraytmp))))
			return (0);
	}
	return (check);
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

int	ft_null_sort_check(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0)
			return (0);
		else if (ft_strlen(av[i]) == ft_strnspn(av[i], " "))
			return (0);
		i++;
	}
	if (ft_words(av) <= 2)
	{
		return (0);
	}
	return (1);
}

char	**ft_pre_control(char **av)
{
	char	**array;
	char	*ssum;

	ssum = ft_sum(av);
	array = ft_split(ssum);
	return (array);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (ft_null_sort_check(av) == 1)
		{
			if (!(ft_master_check(ft_pre_control(av), ft_words(av))))
			{
				write(2, "Error! Check\n", 13);
				return (0);
			}
			else
				ft_start_sort(ft_pre_control(av), ft_words(av) - 1);
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
