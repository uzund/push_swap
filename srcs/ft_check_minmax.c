/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_minmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:54:26 by duzun             #+#    #+#             */
/*   Updated: 2023/01/18 23:13:07 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_minmax(char **s)
{
	char	**arg;
	int		check;
	int		words;
	int		i;
	double	minmax;

	arg = s;
	words = 0;
	check = 0;
	i = -1;
	while (arg[++i])
	{
		words = ft_count_words(arg[i]);
		//printf("Arg[%d]words :%d\n",i, words);
		while (words--)
		{
			minmax = ft_atof(&arg[i][0]);
			printf("Arg[%d]words :%d\n",i, words);
			printf("minmax değeri :%.0f\n", minmax);
			if (minmax < -2147483648 || minmax > 2147483647)
			{
				printf("limitlerin üzerinde değer\n");
				return (0);
			}
			//ft_array_dup((int) minmax);
		}
	}
	return (1);
}
