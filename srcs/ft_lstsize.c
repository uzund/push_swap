/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:10:56 by duzun             #+#    #+#             */
/*   Updated: 2023/01/19 23:01:29 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	size_t	cont;
	t_list	*tmp;

	tmp = lst;
	cont = 0;
	while (tmp)
	{
		tmp = tmp->next;
		cont++;
	}
	return (cont);
}
