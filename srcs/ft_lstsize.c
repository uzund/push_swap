/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:10:56 by duzun             #+#    #+#             */
/*   Updated: 2023/01/18 22:47:33 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*tmp;

	tmp = lst;
	cont = 0;
	while (lst != NULL)
	{
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}