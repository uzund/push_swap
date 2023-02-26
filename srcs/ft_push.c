/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:22:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/25 23:26:38 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;
	t_list	*lst_from;
	t_list	*lst_to;

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

int	ft_pa(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	ft_pb(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
