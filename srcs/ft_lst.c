/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:39:48 by duzun             #+#    #+#             */
/*   Updated: 2023/02/20 00:33:11 by duzun            ###   ########.fr       */
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
