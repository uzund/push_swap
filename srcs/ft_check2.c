/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:04:28 by duzun             #+#    #+#             */
/*   Updated: 2023/02/27 19:04:05 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_number(const char *s)
{
	int	i;
	int	plussum;
	int	minussum;

	i = -1;
	plussum = 0;
	minussum = 0;
	while (s[++i] != '\0')
	{
		if ((!ft_isdigit(s[i]) && s[i] != '-' && s[i] != '+') && !ft_isin(s[i]))
			return (0);
		if (s[i] == '+' || s[i] == '-')
		{
			if (i == 0 || !ft_isdigit(s[i - 1]))
			{
				if (s[i] == '+')
					plussum++;
				else
					minussum++;
			}
			else
				return (0);
		}
	}
	return (!((plussum > 1 || minussum > 1) || (plussum && minussum)));
}

int	ft_check_sign(const char *s)
{
	int		i;
	int		count;
	char	c;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		if ((c != ' ' && c != '-' && !(c >= '0' && c <= '9')) && \
			(c != ' ' && c != '+' && !(c >= '0' && c <= '9')))
			return (0);
		if (((c == '-' && !(s[i + 1] >= '0' && s[i + 1] <= '9')) || \
			(i > 0 && c == '-' && !(s[i - 1] == ' '))) && \
			((c == '+' && !(s[i + 1] >= '0' && s[i + 1] <= '9')) || \
				(i > 0 && c == '+' && !(s[i - 1] == ' '))))
			return (0);
		if (c >= '0' && c <= '9')
			count++;
		i++;
	}
	if (count == 0)
		return (0);
	return (1);
}

int	ft_check_minmax(char **s)
{
	char	**arg;
	int		check;
	int		i;
	double	minmax;

	arg = s;
	check = 0;
	i = -1;
	while (arg[++i])
	{
		minmax = ft_atof(&arg[i][0]);
		if (minmax < -2147483648 || minmax > 2147483647)
			return (0);
	}
	return (1);
}

void	free_tmp(char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

int	ft_check_duplicate(char **arraytmp)
{
	char	**array;
	int		i;
	int		j;
	char	**tmp;

	array = arraytmp;
	i = -1;
	while (array[++i])
	{
		j = i + 1;
		while (array[j])
		{
			tmp = ft_split(*(&array[j]), '+');
			if (ft_strcmp(array[i], *tmp) == 0)
			{
				free_tmp(tmp);
				return (0);
			}
			free_tmp(tmp);
			j++;
		}
	}
	return (1);
}
