/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:05:37 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 21:07:41 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_sum_str(char *ssum, const char *s2)
{
	char	*tmp;

	tmp = ssum;
	ssum = ft_strjoin(ssum, s2);
	free(tmp);
	tmp = ssum;
	ssum = ft_strjoin(ssum, " ");
	free(tmp);
	return (ssum);
}

char	*ft_sum(char **s)
{
	char	**arg;
	char	*ssum;
	int		i;

	arg = s;
	ssum = (char *)malloc(sizeof(char) + 1);
	i = 0;
	while (arg[++i])
		ssum = ft_sum_str(ssum, arg[i]);
	return (ssum);
}
