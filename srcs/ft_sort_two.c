/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:20:23 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 02:58:02 by duzun            ###   ########.fr       */
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
		ft_ra(arraya[0], arraya[1]);
	}

	while (count--)
		printf("sıralanan değerler %d = %d\n", count, *arraya[count]);
	return (0);
}
