/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:16:20 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 01:20:44 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_check_null(const char *s)
// {
// 	int		i;
// 	int		count;
// 	char	c;

// 	count = 0;
// 	i = 0;
// 	if (*s == '\0')
// 		return (0);
// 	while (s[i] != '\0')
// 	{
// 		c = s[i];
//         if (c != ' ' && c != '-' && !('0' <= c && c <= '9'))
//             return (0);
//         if ((c == '-' && !('0' <= s[i + 1] && s[i + 1] <= '9')) || (i > 0 && c == '-' && !(s[i - 1] == ' ')))
//             return (0);
//         if ('0' <= c && c <= '9')
// 			count++;
// 		i++;
// 	}
// 	if (count == 0)
// 		return (0);
// 	return (1);
// }


int ft_check_null(const char *str)
{
    int     i;
    char    c;
    int     s;
    s = 0;
    i = 0;
		printf("ic:::: ");

    while (str[i] != '\0')
    {
        c = str[i];
        if (c != ' ' && c != '-' && !('0' <= c && c <= '9'))
            return (0);
        if ((c == '-' && !('0' <= str[i + 1] && str[i + 1] <= '9')) || (i > 0 && c == '-' && !(str[i - 1] == ' ')))
            return (0);
        if (c >= '0' && c <= '9')
            s++;
        i++;
    }
	printf(" teds:::: %d", s);

    if (s == 0)
        return (0);
    return (1);
}
