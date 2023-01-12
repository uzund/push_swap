/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:46:06 by duzun             #+#    #+#             */
/*   Updated: 2023/01/12 13:06:51 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isin(char c)
{
	int		i;
	char	*charset;

	charset = ft_strdup(" \t\v\n\r\f\n");
	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}
