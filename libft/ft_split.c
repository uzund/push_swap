/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:44:16 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 01:23:38 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // silmeyi unutma

char	**ft_split(char *s)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_count_words(s) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_isin(s[i]))
			i++;
		k = i;
		while (s[i] && !(ft_isin(s[i])))
			i++;
		if (i > k)
			array[j++] = ft_strndup(s + k, i - k);
	}
	printf("geldi %d\n",i);
	array[j] = 0;
	return (array);
}
