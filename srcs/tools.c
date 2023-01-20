/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:41:01 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 21:09:02 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
		free(s[i--]);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*lst;
	t_list	*tmp;

	lst = *stack;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	free(stack);
}

void	ft_put_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->data, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

int	ft_is_sorted(t_list **stack)
{
	t_list	*lst;

	lst = *stack;
	while (lst && lst->next)
	{
		if (lst->data > lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}
