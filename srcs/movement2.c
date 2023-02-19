/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:02:28 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:35:22 by duzun            ###   ########.fr       */
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

int	ft_rr(t_info *info)
{
	if ((ft_lstsize(info->stack_a) < 2) || (ft_lstsize(info->stack_b) < 2))
		return (-1);
	ft_rotate(&info->stack_a);
	ft_rotate(&info->stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int	ft_rev_rotate(t_stack **stack)
{
	t_stack	*lst;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	lst = *stack;
	tail = ft_lstlast(lst);
	while (lst)
	{
		if (lst->next->next == NULL)
		{
			lst->next = NULL;
			break ;
		}
		lst = lst->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	ft_rra(t_info *info)
{
	if (ft_rev_rotate(&info->stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	ft_rrb(t_info *info)
{
	if (ft_rev_rotate(&info->stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

