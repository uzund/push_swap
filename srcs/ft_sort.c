/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:10:33 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:23:03 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_min(t_stack **stack, int n)
{
	t_stack	*lst;
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

static void	ft_sort_three(t_info *info)
{
	t_stack	*lst;
	int		min;
	int		next_min;

	lst = info->stack_a;
	min = ft_get_min(&info->stack_a, -1);
	next_min = ft_get_min(&info->stack_a, min);
	ft_sort_three_2(info, lst, min, next_min);
}

static void	ft_sort_four(t_info *info)
{
	int	distance;

	if (ft_is_sorted(info))
	{
		return ;
	}
	distance = ft_get_distance(&info->stack_a, ft_get_min(&info->stack_a, -1));
	if (distance == 1)
		ft_ra(info);
	else if (distance == 2)
	{
		ft_ra(info);
		ft_ra(info);
	}
	else if (distance == 3)
		ft_rra(info);
	if (ft_is_sorted(info))
		return ;
	ft_pb(info);
	ft_sort_three(info);
	ft_pa(info);
}

void	ft_sort_five(t_info *info)
{
	int	distance;

	distance = ft_get_distance(&info->stack_a, ft_get_min(&info->stack_a, -1));
	if (distance == 1)
		ft_ra(info);
	else if (distance == 2)
	{
		ft_ra(info);
		ft_ra(info);
	}
	else if (distance == 3)
	{
		ft_rra(info);
		ft_rra(info);	
	}
	else if (distance == 4)
		ft_rra(info);
	if (ft_is_sorted(info))
		return ;
	ft_pb(info);
	ft_sort_four(info);
	ft_pa(info);
}

void	ft_easy_sort(t_info *info)
{
	int	size;

	size = ft_lstsize(info->stack_a);
	if (size == 2)
		ft_sa(info);
	else if (size == 3)
	{
		ft_sort_three(info);
	}		
	else if (size == 4)
	{
		ft_sort_four(info);
	}		
	else if (size == 5)
	{
		ft_sort_five(info);
	}
}
