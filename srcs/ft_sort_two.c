/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:20:23 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 03:49:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_two(int **arraya, int count)
{

	printf("int değer [0] %d\n", *arraya[0]);
	printf("int değer [1] %d\n", *arraya[1]);
	if (*arraya[0] > *arraya[1])
	{
		printf("girdi\n");
		ft_ra(arraya, count);
	}

	while (count--)
		printf("sıralanan değerler %d = %d\n", count, *arraya[count]);
	return (0);
}
