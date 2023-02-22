/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:44:02 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 20:57:50 by duzun            ###   ########.fr       */
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

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0)
			return (0);
		else if (ft_strlen(av[i]) == ft_strnspn(av[i], " "))
			return (0);
		i++;
	}
	if (ft_words(av) <= 2)
		return (0);
	return (1);
}

int	ft_master_check(char **arraytmp, int words)
{
	char	**arg;
	int		i;

	arg = arraytmp;
	if (words <= 1)
		return (0);
	else
	{
		i = -1;
		while (arg[++i])
		{
			if (!ft_check_number(arg[i]))
				return (0);
			else if (!ft_check_sign(arg[i]))
				return (0);
		}
		if (!ft_check_minmax(arraytmp))
			return (0);
		else if (!ft_check_duplicate(arraytmp))
			return (0);
	}
	return (1);
}

char	**ft_array_init(char **av)
{
	char	**arraytmp;
	char	*ssum;

	ssum = ft_sum(av);
	arraytmp = ft_split(ssum, ' ');
	return (arraytmp);
}
