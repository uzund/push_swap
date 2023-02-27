/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:19:55 by duzun             #+#    #+#             */
/*   Updated: 2023/02/27 16:26:43 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_max_bits(t_list **stack_a)
{
	t_list	*lst;
	int		max;
	int		max_bits;

	lst = *stack_a;
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

void	ft_sort_three_2(t_list **stack_a, t_list *lst, int min, int next_min)
{
	if (lst->index == min && lst->next->index != next_min)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (lst->index == next_min)
	{
		if (lst->next->index == min)
			ft_sa(stack_a);
		else
			ft_rra(stack_a);
	}
	else
	{
		if (lst->next->index == min)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
}

int	ft_is_sorted(t_list **stack)
{
	t_list	*lst;

	lst = *stack;
	while (lst && lst->next)
	{
		if (lst->value > lst->next->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}
