/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:19:55 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 00:02:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_max_bits(t_stack **stack)
{
	t_stack	*lst;
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

void	ft_radix_sort(t_list *data)
{
	t_stack	*lst_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	lst_a = data->stack_a;
	size = ft_lstsize(lst_a);
	max_bits = ft_get_max_bits(&data->stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			lst_a = data->stack_a;
			if (((lst_a->index >> i) & 1) == 1)
				ft_ra(data);
			else
				ft_pb(data);
		}
		while (ft_lstsize(data->stack_b) != 0)
			ft_pa(data);
		i++;
	}
}

void	ft_sort_three_2(t_list *data, t_stack *lst, int min, int next_min)
{
	if (lst->index == min && lst->next->index != next_min)
	{
		ft_ra(data);
		ft_sa(data);
		ft_rra(data);
	}
	else if (lst->index == next_min)
	{
		if (lst->next->index == min)
			ft_sa(data);
		else
			ft_rra(data);
	}
	else
	{
		if (lst->next->index == min)
			ft_ra(data);
		else
		{
			ft_sa(data);
			ft_rra(data);
		}
	}
}
