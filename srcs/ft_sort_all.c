/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:19:55 by duzun             #+#    #+#             */
/*   Updated: 2023/01/18 20:46:40 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_max_bits(t_list **stack)
{
	t_list	*lst;
	int		max;
	int		max_bits;

	lst = *stack;
	max = lst->index;
	max_bits = 0;
	while (lst)
	{
		if (lst->index > max)
			max = lst->index;
		lst = lst->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	lst_a = *stack_a;
	size = ft_lstsize(lst_a);
	max_bits = ft_get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			lst_a = *stack_a;
			if (((lst_a->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_pa(stack_a, stack_b);
		i++;
	}
}
