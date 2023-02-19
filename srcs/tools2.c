/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:49:11 by duzun             #+#    #+#             */
/*   Updated: 2023/02/19 23:26:49 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_get_next_min(t_stack **stack)
{
	t_stack	*lst;
	t_stack	*min;
	int		lst_min;

	min = NULL;
	lst_min = 0;
	lst = *stack;
	if (lst)
	{
		while (lst)
		{
			if ((lst->index == -1) && (!lst_min || lst->value < min->value))
			{
				min = lst;
				lst_min = 1;
			}
			lst = lst->next;
		}
	}
	return (min);
}

void	ft_stack_index(t_stack **stack)
{
	t_stack	*lst;
	int		index;

	index = 0;
	lst = ft_get_next_min(stack);
	while (lst)
	{
		lst->index = index++;
		lst = ft_get_next_min(stack);
	}
}

int	ft_get_distance(t_stack **stack, int index)
{
	t_stack	*lst;
	int		distance;

	distance = 0;
	lst = *stack;
	while (lst)
	{
		if (lst->index == index)
			break ;
		distance++;
		lst = lst->next;
	}
	return (distance);
}

// Function that prints the stack
// Yığını yazdıran işlev
void	ft_print_lst(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
