/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:15:06 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 05:15:34 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(int **arrayb, int count)
{
	int	**tmp;

	tmp = arrayb;
	while (count--)
	{
		if (!((count - 1) < 0) && *tmp[count] < *tmp[count - 1])
		{
			ft_sa(tmp[count - 1], tmp[count]);
		}
	}
	write(1, "rrb\n", 4);
}
