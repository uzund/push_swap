/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_minmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:54:26 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 00:35:12 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_minmax(char **s)
{
	char	**arg;
	int		check;
	int		i;
	double	minmax;

	arg = s;
	check = 0;
	i = -1;
	while (arg[++i])
	{
		minmax = ft_atof(&arg[i][0]);
		printf("minmax değeri :%.0f\n", minmax);
		if (minmax < -2147483648 || minmax > 2147483647)
		{
			printf("limitlerin üzerinde değer\n");
			return (0);
		}
	}
	return (1);
}
