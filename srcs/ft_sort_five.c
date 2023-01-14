/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:20:14 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 05:51:57 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_five(int **arraya, int count)
{
	int	**arrayb;
	int	*b;
	int	*len_a;
	int	*len_b;
	int	i;

	printf("int değer [0] %d\n", *arraya[0]);
	printf("int değer [1] %d\n", *arraya[1]);
	printf("int değer [2] %d\n", *arraya[2]);
	printf("int değer [3] %d\n", *arraya[3]);
	printf("int değer [4] %d\n", *arraya[4]);

	arrayb = (int **)malloc(sizeof(int *) * count);
	i = 0;
	while (i < count)
	{
		b = malloc(1);
		*b = 0;
		arrayb[i] = b;
		printf("integer değer : %d\n", *arrayb[i]);
		i++;
	}
	ft_pb(arraya, arrayb, count);
	ft_pb(arraya, arrayb, count - 1);
	printf("int b değer [0] %d\n", *arrayb[0]);
	printf("int b değer [1] %d\n", *arrayb[1]);
	printf("int b değer [2] %d\n", *arrayb[2]);
	printf("int b değer [3] %d\n", *arrayb[3]);
	printf("int b değer [4] %d\n", *arrayb[4]);
	printf("int değer [0] %d\n", *arraya[0]);
	printf("int değer [1] %d\n", *arraya[1]);
	printf("int değer [2] %d\n", *arraya[2]);
	printf("int değer [3] %d\n", *arraya[3]);
	printf("int değer [4] %d\n", *arraya[4]);
	return (0);
}
