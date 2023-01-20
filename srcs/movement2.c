/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:02:28 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 21:10:43 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*lst;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	lst = *stack;
	tail = ft_lstlast(lst);
	*stack = lst->next;
	lst->next = NULL;
	tail->next = lst;
	return (0);
}


int	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int	ft_rev_rotate(t_list **stack)
{
	t_list	*lst;
	t_list	*tail;

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

int	ft_rra(t_list **stack_a)
{
	if (ft_rev_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	ft_rrb(t_list **stack_b)
{
	if (ft_rev_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

