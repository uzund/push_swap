/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:44:16 by duzun             #+#    #+#             */
/*   Updated: 2023/02/19 17:17:44 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strs(const char *s, char c)
{
	int		count;
	int		split;
	size_t	i;

	i = 0;
	count = 0;
	split = 0;
	while (s[i])
	{
		if (s[i] != c && split == 0)
		{
			split = 1;
			count++;
		}
		else if (s[i] == c)
			split = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	int		index;

	strs = malloc((ft_count_strs(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if ((s[i] != c && s[i] != '\0') && index < 0)
			index = i;
		if ((s[i] == c || s[i] == '\0') && index >= 0)
		{
			strs[j] = ft_substr(s, index, (i - index));
			j++;
			index = -1;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}
