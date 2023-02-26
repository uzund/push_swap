/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:20:23 by duzun             #+#    #+#             */
/*   Updated: 2023/02/26 21:13:09 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_array_init(char **av)
{
	char	**arraytmp;
	char	*ssum;

	ssum = ft_sum(av);
	arraytmp = ft_split(ssum, ' ');
	free(ssum);
	return (arraytmp);
}

void	ft_create_stacks(t_list **stack_a, char **prearray, int words)
{
	t_list	*new;
	int		i;

	new = malloc(sizeof(t_list));
	*stack_a = new;
	i = 0;
	while (i < words)
	{
		new->value = ft_atoi(prearray[i]);
		new->index = 0;
		new->next = NULL;
		if (i + 1 < words)
		{
			new->next = malloc(sizeof(t_list));
			new = new->next;
		}
		i++;
	}
}

void	ft_init_index(t_list **stack, int max, int words)
{
	t_list	*temp;
	t_list	*temp_min;
	int		index;
	int		min;

	temp = *stack;
	temp_min = NULL;
	index = 1;
	while (index <= words)
	{
		min = max;
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
		temp = *stack;
		index++;
	}
}

int	ft_find_max(t_list **stack_a)
{
	t_list	*temp;
	int		max;

	temp = *stack_a;
	max = temp->value;
	while (temp)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}
