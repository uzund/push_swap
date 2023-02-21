/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:10:33 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 00:02:43 by duzun            ###   ########.fr       */
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

static void	ft_sort_three(t_list *data)
{
	t_stack	*lst;
	int		min;
	int		next_min;

	lst = data->stack_a;
	min = ft_get_min(&data->stack_a, -1);
	next_min = ft_get_min(&data->stack_a, min);
	ft_sort_three_2(data, lst, min, next_min);
}

static void	ft_sort_four(t_list *data)
{
	int	distance;

	if (ft_is_sorted(data))
	{
		return ;
	}
	distance = ft_get_distance(&data->stack_a, ft_get_min(&data->stack_a, -1));
	if (distance == 1)
		ft_ra(data);
	else if (distance == 2)
	{
		ft_ra(data);
		ft_ra(data);
	}
	else if (distance == 3)
		ft_rra(data);
	if (ft_is_sorted(data))
		return ;
	ft_pb(data);
	ft_sort_three(data);
	ft_pa(data);
}

void	ft_sort_five(t_list *data)
{
	int	distance;

	distance = ft_get_distance(&data->stack_a, ft_get_min(&data->stack_a, -1));
	if (distance == 1)
		ft_ra(data);
	else if (distance == 2)
	{
		ft_ra(data);
		ft_ra(data);
	}
	else if (distance == 3)
	{
		ft_rra(data);
		ft_rra(data);	
	}
	else if (distance == 4)
		ft_rra(data);
	if (ft_is_sorted(data))
		return ;
	ft_pb(data);
	ft_sort_four(data);
	ft_pa(data);
}

void	ft_easy_sort(t_list *data)
{
	int	size;

	size = ft_lstsize(data->stack_a);
	if (size == 2)
		ft_sa(data);
	else if (size == 3)
	{
		ft_sort_three(data);
	}		
	else if (size == 4)
	{
		ft_sort_four(data);
	}		
	else if (size == 5)
	{
		ft_sort_five(data);
	}
}
