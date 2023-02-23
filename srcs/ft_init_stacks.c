/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:20:23 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 21:51:18 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacks(t_list *data)
{
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->len_a = 0;
	data->max = 0;
}

char	**ft_array_init(char **av)
{
	char	**arraytmp;
	char	*ssum;

	ssum = ft_sum(av);
	arraytmp = ft_split(ssum, ' ');
	return (arraytmp);
}

void	ft_create_stacks(t_list *data, char **prearray, int list_size)
{
	int		i;
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	data->stack_a = new;
	data->len_a = list_size;
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

void	ft_init_index(t_list *data)
{
	t_stack	*temp;
	t_stack	*temp_min;
	int		index;
	int		min;

	ft_find_max(data);
	temp = data->stack_a;
	temp_min = NULL;
	index = 1;
	while (index <= data->len_a)
	{
		min = data->max;
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
		temp = data->stack_a;
		index++;
	}
}

void	ft_find_max(t_list *data)
{
	t_stack	*temp;
	int		max;

	temp = data->stack_a;
	max = temp->value;
	while (temp)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	data->max = max;
}
