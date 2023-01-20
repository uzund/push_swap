/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:49:11 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 19:42:34 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_get_next_min(t_list **stack)
{
	t_list	*lst;
	t_list	*min;
	int		lst_min;

	min = NULL;
	lst_min = 0;
	lst = *stack;
	if (lst)
	{
		while (lst)
		{
			if ((lst->index == -1) && (!lst_min || lst->data < min->data))
			{
				min = lst;
				lst_min = 1;
			}
			lst = lst->next;
		}
	}
	return (min);
}

void	ft_stack_index(t_list **stack)
{
	t_list	*lst;
	int		index;

	index = 0;
	lst = ft_get_next_min(stack);
	while (lst)
	{
		lst->index = index++;
		lst = ft_get_next_min(stack);
	}
}



int	ft_get_distance(t_list **stack, int index)
{
	t_list	*lst;
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

void	ft_print_lst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->data, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
