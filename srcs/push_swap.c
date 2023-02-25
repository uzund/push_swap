/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/25 13:57:20 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_master(t_list *data)
{
	if (ft_is_sorted(data))
	{
		return ;
	}
	else
	{
		if (ft_lstsize(data->stack_a) <= 5)
			ft_easy_sort(data);
	}
}

void	ft_free_stacks(t_list *data)
{
	t_stack	*temp;

	while (data->stack_a)
	{
		temp = data->stack_a;
		data->stack_a = temp->next;
		free(temp);
	}
}

void	ft_sort(t_list *data, int words)
{
	if (words <= 5)
	{
		ft_init_index(data);
		ft_sort_master(data);
	}
	else
	{
		if (ft_is_sorted(data))
			return ;
		else
		{
			ft_init_index(data);
			ft_radix_sort(data);
		}
	}
}

int	ft_start(t_list *data, char **av, char	**prearray, int words)
{
	if (ft_null_check(av) == 1)
	{
		prearray = ft_array_init(av);
		if (!(ft_master_check(prearray, words)))
		{
			write(2, "Error!\n", 7);
			exit(EXIT_FAILURE);
		}
		else
		{
			ft_init_stacks(data);
			ft_create_stacks(data, prearray, words);
		}
		ft_sort(data, words);
	}
	else
	{
		// write(2, "Error!\n", 7);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_list	data;
	int		words;
	char	**prearray;

	prearray = NULL;
	if (ac < 2)
		return (EXIT_SUCCESS);
	else
	{
		words = ft_words(av) - 1;
		ft_start(&data, av, prearray, words);
	}
}
