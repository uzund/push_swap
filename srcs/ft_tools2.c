/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:49:11 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 23:16:13 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_lstlast(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

int	ft_lstsize(t_stack *lst)
{
	size_t	cont;
	t_stack	*tmp;

	tmp = lst;
	cont = 0;
	while (tmp)
	{
		tmp = tmp->next;
		cont++;
	}
	return (cont);
}

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
