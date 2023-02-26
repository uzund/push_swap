/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:10:33 by duzun             #+#    #+#             */
/*   Updated: 2023/02/26 20:37:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_min(t_list **stack, int n)
{
	t_list	*lst;
	int		min;

	lst = *stack;
	min = lst->index;
	while (lst->next)
	{
		lst = lst->next;
		if ((lst->index < min) && lst->index != n)
			min = lst->index;
	}
	return (min);
}

static void	ft_sort_three(t_list **stack_a)
{
	t_list	*lst;
	int		min;
	int		next_min;

	lst = *stack_a;
	min = ft_get_min(stack_a, -1);
	next_min = ft_get_min(stack_a, min);
	ft_sort_three_2(stack_a, lst, min, next_min);
}

static void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (ft_is_sorted(stack_a))
	{
		return ;
	}
	distance = ft_get_distance(stack_a, ft_get_min(stack_a, -1));
	if (distance == 1)
		ft_ra(stack_a);
	else if (distance == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (distance == 3)
		ft_rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = ft_get_distance(stack_a, ft_get_min(stack_a, -1));
	if (distance == 1)
		ft_ra(stack_a);
	else if (distance == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (distance == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (distance == 4)
		ft_rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	ft_pb(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_easy_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		ft_sa(stack_a);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size == 5)
		ft_sort_five(stack_a, stack_b);
}
