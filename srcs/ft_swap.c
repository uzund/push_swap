/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:39:28 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 21:17:37 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*lst;
	t_stack	*next;
	int		tmp_value;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	lst = *stack;
	next = lst->next;
	tmp_value = lst->value;
	tmp_index = lst->index;
	lst->value = next->value;
	lst->index = next->index;
	next->value = tmp_value;
	next->index = tmp_index;
	return (0);
}

int	ft_sa(t_list *data)
{
	if (ft_swap(&data->stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	ft_sb(t_list *data)
{
	if (ft_swap(&data->stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ft_ss(t_list *data)
{	
	if ((ft_lstsize(data->stack_a) < 2) || (ft_lstsize(data->stack_b) < 2))
		return (-1);
	ft_swap(&data->stack_a);
	ft_swap(&data->stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}