/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:36:10 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_master(t_info *info)
{
	if (ft_is_sorted(info))
	{
		return ;
	}
	else
	{
		if (ft_lstsize(info->stack_a) <= 5)
			ft_easy_sort(info);
	}
}

void	ft_free_stacks(t_info *info)
{
	t_stack	*temp;

	while (info->stack_a)
	{
		temp = info->stack_a;
		info->stack_a = temp->next;
		free(temp);
	}
}

void	ft_sort(t_info *info, int words)
{
	if (words <= 5)
		ft_sort_master(info);
	else
	{
		ft_init_index(info);
		ft_radix_sort(info);
		// ft_print_lst(info.stack_a);			
	}
	ft_free_stacks(info);
}

int	ft_start(t_info *info, char **av, char	**prearray, int words)
{
	if (ft_null_sort_check(av) == 1)
	{
		prearray = ft_array_init(av);
		if (!(ft_master_check(prearray, words)))
		{
			write(2, "Error!\n", 7);
			return (0);
		}
		else
		{
			ft_init_stacks(info);	
			ft_create_stacks(info, prearray, words);
		}
		ft_sort(info, words);
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_info	info;
	int		words;
	char	**prearray;

	prearray = NULL;
	if (ac < 2)
		return (EXIT_SUCCESS);
	else
	{
		words = ft_words(av) - 1;
		ft_start(&info, av, prearray, words);
	}
}
