/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:43:35 by duzun             #+#    #+#             */
/*   Updated: 2023/01/18 23:32:27 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_list **stack_point_a, t_list **stack_point_b)
{
	t_list	*tmp;
	t_list	*lst_point_a;
	t_list	*lst_point_b;

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