/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:22:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 21:23:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack **stack_point_a, t_stack **stack_point_b)
{
	t_stack	*tmp;
	t_stack	*lst_point_a;
	t_stack	*lst_point_b;

	if (ft_lstsize(*stack_point_b) == 0)
		return (-1);
	lst_point_a = *stack_point_a;
	lst_point_b = *stack_point_b;
	tmp = lst_point_b;
	lst_point_b = lst_point_b->next;
	*stack_point_b = lst_point_b;
	if (!lst_point_a)
	{
		lst_point_a = tmp;
		lst_point_a->next = NULL;
		*stack_point_a = lst_point_a;
	}
	else
	{
		tmp->next = lst_point_a;
		*stack_point_a = tmp;
	}
	return (0);
}

int	ft_pa(t_list *data)
{
	if (ft_push(&data->stack_a, &data->stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	ft_pb(t_list *data)
{
	if (ft_push(&data->stack_b, &data->stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}