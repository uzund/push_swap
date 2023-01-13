/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_minmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:54:26 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 16:58:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_minmax(char **s)
{
	char	**arg;
	int		check;
	int		words;
	int		i;
	// int		j;
	double 	minmax;

	arg = s;
	words = 0;
	check = 0;
	i = 0;
	while (arg[++i])
	{
		words = ft_count_words(arg[i]);
		printf("Arg[%d]words :%d\n",i, words);
		//words++;
		while (words--)
		{
			minmax = ft_atof(&arg[i][0]);
			printf("Arg[%d]words :%d\n",i, words);
			printf("minmax değeri :%.0f\n", minmax);
			if (minmax < (double)-2147483648 || minmax > (double)2147483647)
			{
				printf("limitlerin üzerinde değer\n");
				return (0);
			}
			// else
			// {
				
			// 	printf("integer değer\n");
			// 	return (1);
			// }
			
			// printf("Arg[%d]words :%d\n",i, words);
		}
	}
	return (1);
}
