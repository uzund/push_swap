/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_master.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:10:33 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 03:05:21 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_master(char **array, int count)
{
	int	**arraya;
	int	i;
	int *a;

	arraya = (int **)malloc(sizeof(int *) * count);
	printf("string değer : %s\n", array[0]);
	printf("string değer : %s\n", array[1]);
	printf("string değer : %s\n", array[2]);
	printf("count değer : %d\n", count);
	i = 0;
	while (i < count)
	{
		a = malloc(1);
		*a = ft_atoi(array[i]);
		arraya[i] = a;
		printf("integer değer : %d\n", *arraya[i]);
		i++;
	}
	if (count == 2)
		ft_sort_two(arraya, count);
	else if (count == 3)
		ft_sort_three(arraya, count);
	else if (count == 4 || count == 5)
		ft_sort_five(arraya, count);
	else if (count > 5)
		ft_sort_all(arraya, count);
	return (0);
}

