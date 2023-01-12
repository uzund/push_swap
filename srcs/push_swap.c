/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/12 23:18:57 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // close

int	ft_master_check(char *s)
{
	int	check;

	check = 0;
	check = ft_check_number(s);
	printf("geçti\n");
	return (check);
}

int	main(int ac, char **av)
{
	// int	*arraya;
	// int	*arrayb;
	char	*s;
	int		i;
	int		check;

	if (ac > 1)
	{
		s = (char *)malloc(sizeof(char) + 1);
		i = 0;
		while (av[++i])
			s = ft_sum_str(s, &av[i][0]);
		printf("total arguman : %s\n", s);
		check = ft_master_check(s);
		if (check)
		{
			printf("Tertemiz string :\n");
			return (0);
		}
		else
		{
			printf("Berbat string :%d\n", check);
			return (0);
		}
		return (0);
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}