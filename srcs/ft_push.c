/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:22:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 23:10:32 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack **stack_from, t_stack **stack_to)
{
	t_stack	*tmp;
	t_stack	*lst_from;
	t_stack	*lst_to;

	if (ft_lstsize(*stack_to) == 0)
		return (-1);
	lst_from = *stack_from;
	lst_to = *stack_to;
	tmp = lst_to;
	lst_to = lst_to->next;
	*stack_to = lst_to;
	if (!lst_from)
	{
		lst_from = tmp;
		lst_from->next = NULL;
		*stack_from = lst_from;
	}
	else
	{
		tmp->next = lst_from;
		*stack_from = tmp;
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
