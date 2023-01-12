/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/12 19:20:48 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // close



int	main(int ac, char **av)
{
	// int	*arraya;
	// int	*arrayb;
	char	*s;
	int		i;
	//int		j;

	if (ac > 1)
	{
		s = (char *)malloc(sizeof(char) + 1);
		i = 0;
		while (av[++i])
			s = ft_sum_str(s, &av[i][0]);
		printf("total arguman : %s\n", s);
		return (0);
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}