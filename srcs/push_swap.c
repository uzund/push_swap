/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/26 21:13:40 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **stack, t_list **stack_a, t_list **stack_b, int words)
{
	int		max;

	max = ft_find_max(stack);
	if (ft_lstsize(*stack_a) <= 5)
	{
		ft_init_index(stack, max, words);
		if (ft_is_sorted(stack_a))
			return ;
		else
			ft_easy_sort(stack_a, stack_b);
	}
	else
	{
		if (ft_is_sorted(stack))
			return ;
		else
		{
			ft_init_index(stack, max, words);
			ft_radix_sort(stack_a, stack_b);
		}
	}
}

int	ft_start( t_list **stack_a, t_list **stack_b, char **av)
{
	char	**prearray;
	int		words;

	prearray = NULL;
	words = ft_words(av) - 1;
	if (ft_null_check(av) == 1)
	{
		prearray = ft_array_init(av);
		if (!(ft_master_check(prearray, words)))
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		else
			ft_create_stacks(stack_a, prearray, words);
		ft_sort(stack_a, stack_a, stack_b, words);
		ft_free_stack(stack_a);
		ft_free_stack(stack_b);
		ft_free(prearray);
	}
	else
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		return (EXIT_SUCCESS);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_start(stack_a, stack_b, av);
}
