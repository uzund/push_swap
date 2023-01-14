/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:44:58 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 23:04:54 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate(char **arraytmp)
{
	char	**array;
	int		i;
	int		j;

	array = arraytmp;
	i = -1;
	while (array[++i])
	{
		j = i + 1;
		while (array[j])
		{
			if (ft_strcmp(array[i], array[j]) == 0)
				return (0);
			j++;
		}
	}
	return (1);
}
