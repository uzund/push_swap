/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:39:28 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 21:02:58 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_list **stack)
{
	t_list	*lst;
	t_list	*next;
	int		tmp_data;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	lst = *stack;
	next = lst->next;
	tmp_data = lst->data;
	tmp_index = lst->index;
	lst->data = next->data;
	lst->index = next->index;
	next->data = tmp_data;
	next->index = tmp_index;
	return (0);
}
