/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:41:50 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 04:00:14 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int **arraya, int count)
{
	int	**tmp;
	int i;

	tmp = arraya;
	i = 0;
	while (i < count)
	{
		if ((i + 1) != count && *tmp[i] > *tmp[i + 1])
			ft_sa(tmp[i], tmp[i + 1]);
		i++;
	}
	write(1, "ra\n", 3);
}

