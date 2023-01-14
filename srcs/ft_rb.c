/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:18:04 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 05:18:37 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(int **arrayb, int count)
{
	int	**tmp;
	int	i;

	tmp = arrayb;
	i = 0;
	while (i < count)
	{
		if ((i + 1) != count && *tmp[i] > *tmp[i + 1])
			ft_sa(tmp[i], tmp[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}
