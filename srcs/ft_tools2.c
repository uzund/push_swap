/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:49:11 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 21:59:27 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function that prints the stack
// Yığını yazdıran işlev
void	ft_print_lst(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

// void	ft_free(char **s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	while (i >= 0)
// 		free(s[i--]);
// }
