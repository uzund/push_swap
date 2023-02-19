/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:20:23 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:20:42 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacks(t_info *info)
{
	info->stack_a = NULL;
	info->stack_b = NULL;
	info->len_a = 0;
	info->max = 0;
}

void	ft_create_stacks(t_info *info, char **prearray, int list_size)
{
	int		i;
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	info->stack_a = new;
	info->len_a = list_size;
	i = 0;
	while (i < list_size)
	{
		new->value = ft_atoi(prearray[i]);
		new->index = 0;
		new->next = NULL;
		if (i + 1 < list_size)
		{
			new->next = malloc(sizeof(t_stack));
			new = new->next;
		}
		i++;
	}
}

void	ft_init_index(t_info *info)
{
	t_stack	*temp;
	t_stack	*temp_min;
	int		index;
	int		min;

	ft_find_max(info);
	temp = info->stack_a;
	temp_min = NULL;
	index = 1;
	while (index <= info->len_a)
	{
		min = info->max;
		while (temp)
		{
			if (temp->value <= min && temp->index == 0)
			{
				min = temp->value;
				temp_min = temp;
			}
			temp = temp->next;
		}
		temp_min->index = index;
		temp = info->stack_a;
		index++;
	}
}

void	ft_find_max(t_info *info)
{
	t_stack	*temp;
	int		max;

	temp = info->stack_a;
	max = temp->value;
	while (temp)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	info->max = max;
}
