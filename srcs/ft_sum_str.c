/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:47:29 by duzun             #+#    #+#             */
/*   Updated: 2023/01/12 23:15:47 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_sum_str(char *s, const char *s2)
{
	char	*tmp;

	tmp = s;
	s = ft_strjoin(s, s2);
	free(tmp);
	tmp = s;
	s = ft_strjoin(s, " ");
	free(tmp);
	return (s);
}
