/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:56:33 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 18:49:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_number(const char *s)
{
	int	i;
	int	pluscount;
	int	minuscount;

	i = -1;
	pluscount = 0;
	minuscount = 0;
	while (s[++i] != '\0')
	{
		if ((!ft_isdigit(s[i]) && s[i] != '-' && s[i] != '+') && !ft_isin(s[i]))
			return (0);
		if (s[i] == '+' || s[i] == '-')
		{
			if (i == 0 || !ft_isdigit(s[i - 1]))
			{
				if (s[i] == '+')
					pluscount++;
				else
					minuscount++;
			}
			else
				return (0);
		}
	}
	return (!(pluscount > 1 || minuscount > 1));
}
