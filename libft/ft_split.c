/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:44:16 by duzun             #+#    #+#             */
/*   Updated: 2023/02/25 21:35:40 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free2(char **split, int j)
{
	while (j-- > 0)
		free(split[j]);
	free(split);
}

static int	ft_split_child(char const *s, char c, char **split, int word)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = -1;
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		split[j] = ft_substr(s, i, size);
		if (!split)
		{
			ft_free2(split, j);
			return (0);
		}
		i += size;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**split;
	int		j;

	word = ft_count_word(s, c);
	split = (char **)malloc((word + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	j = ft_split_child(s, c, split, word);
	split[j] = NULL;
	return (split);
}
