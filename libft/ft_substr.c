/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:18:55 by duzun             #+#    #+#             */
/*   Updated: 2023/02/21 23:49:24 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	j;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_strlen(s);
	if (start >= count)
		return (ft_strdup(""));
	if (count < len)
		len = count;
	dst = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dst)
		return (NULL);
	i = start;
	j = 0;
	while (i < count && j < len)
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}
