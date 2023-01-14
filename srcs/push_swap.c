/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:00:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 01:29:00 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // close

int	ft_master_check(char **s)
{
	char	**arg;
	char	**arraytmp;
	char	*ssum;
	int		words;
	int		check;
	int		i;

	arg = s;
	check = 0;
	words = 0;
	i = 0;
	
	ssum = ft_sum(arg);
	i = -1;

	// check = ft_check_null(&ssum[i]);
	// if (check == 0)
	// 	return (0);

	printf("ft_sum : %s\n", ssum);
	arraytmp = ft_split(ssum);
	arg = arraytmp;
	i = -1;
	while (arg[++i])
	{
		check = ft_check_number(arg[i]);
		// check = ft_check_null(arg[i]);
		if (!check)
		{
			printf("Erorr! number :%d\n", check);
			printf("words :%d\n", words);
			return (0);
		}
		words += ft_count_words(arg[i]);
	}
	printf("Temiz string :%d\n", words);
	printf("Total words :%d\n", words);
	if (words <= 1)
		check = 0;
	else
	{
		check = ft_check_minmax(arraytmp);
		check = ft_check_duplicate(arraytmp);
	// }
	// if (check * words != 0)
	// {
		printf("-- > Rakam sayısı : %d\n", words);
		
		ft_sort_master(arraytmp, words);
	}
	return (check * words);
}

int	main(int ac, char **av)
{
	float	*arraya;
	// int	*arrayb;
	char	**s;
	int		i;
	int		check;

	if (ac > 1)
	{
		i = 0;
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

			printf("Kontrol Başaralı\n");
		}
	}
	else
	{
		write(2, "Error!\n", 7);
		return (0);
	}
}