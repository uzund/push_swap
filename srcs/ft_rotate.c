/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:18:03 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 21:57:29 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*lst;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	lst = *stack;
	tail = ft_lstlast(lst);
	*stack = lst->next;
	lst->next = NULL;
	tail->next = lst;
	return (0);
}

int	ft_ra(t_list *data)
{
	if (ft_rotate(&data->stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_rb(t_list *data)
{
	if (ft_rotate(&data->stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	ft_rr(t_list *data)
{
	if ((ft_lstsize(data->stack_a) < 2) || (ft_lstsize(data->stack_b) < 2))
		return (-1);
	ft_rotate(&data->stack_a);
	ft_rotate(&data->stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
