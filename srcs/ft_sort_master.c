/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_master.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:10:33 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 21:30:55 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_master(char **array, int count)
{
	if (count == 2)
		ft_sort_two(array, count);
	else if (count == 3)
		ft_sort_three(array, count);
	else if (count == 4 || count == 5)
		ft_sort_five(array, count);
	else if (count > 5)
		ft_sort_all(array, count);
	return (0);
}

