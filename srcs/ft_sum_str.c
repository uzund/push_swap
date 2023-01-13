/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:47:29 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 15:21:43 by duzun            ###   ########.fr       */
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
