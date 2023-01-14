/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:18:39 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 04:25:44 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int **arraya, int count)
{
	int	**tmp;
	//int i;

	tmp = arraya;
	//i = 0;
	while (count--)
	{


		if (!((count - 1) < 0) && *tmp[count] < *tmp[count - 1])
		{
			ft_sa(tmp[count - 1], tmp[count]);
		}
	}
	write(1, "rra\n", 4);
}
