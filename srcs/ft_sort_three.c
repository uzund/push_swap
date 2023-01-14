/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:20:18 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 04:36:11 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three(int **arraya, int count)
{
	printf("int değer [0] %d\n", *arraya[0]);
	printf("int değer [1] %d\n", *arraya[1]);
	printf("int değer [1] %d\n", *arraya[2]);
	if (*arraya[0] < *arraya[1] && *arraya[0] < *arraya[2])
	{
		ft_sa(arraya[0], arraya[1]);
		ft_ra(arraya, count);
	}
	else if (*arraya[0] > *arraya[1] && *arraya[1] > *arraya[2])
	{
		ft_sa(arraya[0], arraya[1]);
		ft_rra(arraya, count);
	}
	else if (*arraya[0] > *arraya[1] && *arraya[1] < *arraya[2])
		ft_ra(arraya, count);
	else if (*arraya[0] < *arraya[1] && *arraya[0] > *arraya[2])
		ft_rra(arraya, count);

	while (count--)
		printf("sıralanan değerler %d = %d\n", count, *arraya[count]);
	return (0);
}
