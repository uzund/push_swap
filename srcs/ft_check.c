/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:44:02 by duzun             #+#    #+#             */
/*   Updated: 2023/02/27 19:33:49 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_words(char **av)
{
	int	i;
	int	words;

	words = 0;
	i = -1;
	while (av[++i])
		words += ft_count_words(av[i]);
	return (words);
}

int	ft_null_check(char **av)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (av[i])
	{
		if (ft_strlen(av[i]) != 0)
			k += 1;
		else if (ft_strlen(av[i]) != ft_strnspn(av[i], " "))
			k += 1;
		i++;
	}
	return (k >= 1);
}

int	ft_master_check(char **arraytmp)
{
	char	**arg;
	int		i;

	arg = arraytmp;
	i = -1;
	while (arg[++i])
	{
		if (!ft_check_number(arg[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		else if (!ft_check_sign(arg[i]))
			return (0);
	}
	if (!ft_check_minmax(arraytmp))
		return (0);
	else if (!ft_check_duplicate(arraytmp))
		return (0);
	return (1);
}
