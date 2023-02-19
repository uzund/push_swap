/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:00:33 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:40:10 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *s)
{
	double	num;
	int		sign;
	//int		dot;
	// int		count;

	num = 0.0;
	sign = 1;
	//dot = 0;
	//count = 0;
	while (ft_isin(*s))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		// if (*s == '.')
		// 	dot = 1;
		// else
		// {
		// 	if (dot)
		// 		count++;
		num = (*s - '0') + (num * 10);
		// }
		s++;
	}
	// while (count--)
	// 	num /= 10;
	return (num * sign);
}

