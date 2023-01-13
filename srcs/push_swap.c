/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 16:33:55 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // close

int	ft_master_check(char **s)
{
	char	**arg;
	int		words;
	int		check;
	int		i;

	arg = s;
	check = 0;
	words = 0;
	i = 0;
	while (arg[++i])
	{
		check = ft_check_number(arg[i]);
		words += ft_count_words(arg[i]);
		if (!check)
		{
			printf("Berbat string :%d\n", check);
			printf("words :%d\n", words);
			return (0);
		}
	}
	printf("Temiz string :%d\n", words);
	printf("Total words :%d\n", words);
	if (words <= 1)
		check = 0;
	else
	{
		check = ft_check_minmax(s);
	}
	return (check * words);
}

int	main(int ac, char **av)
{
	float	*arraya;
	// int	*arrayb;
	char	**s;
	// char 	*ssum;
	int		i;
	int		check;
	int 	words;

	if (ac > 1)
	{
		i = 0;
		words = 0;
		s = av;
		check = ft_master_check(s);
		if (!check)
		{
			write(2, "Error! Check\n", 13);
			return (0);
		}
		else
		{
			arraya = (float *)malloc(sizeof(float) + 1);
			// ssum = ft_sum_str(ssum, s);
			printf("Kontrol Başaralı\n");
		}

	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}