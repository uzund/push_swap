/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:41:01 by duzun             #+#    #+#             */
/*   Updated: 2023/02/23 22:26:38 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_distance(t_stack **stack, int index)
{
	t_stack	*lst;
	int		distance;

	distance = 0;
	lst = *stack;
	while (lst)
	{
		if (lst->index == index)
			break ;
		distance++;
		lst = lst->next;
	}
	return (distance);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*lst;
	t_stack	*tmp;

	lst = *stack;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	free(stack);
}

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

char	*ft_sum(char **s)
{
	char	**arg;
	char	*ssum;
	int		i;

	arg = s;
	ssum = (char *)malloc(sizeof(char) + 1);
	i = 0;
	while (arg[++i])
		ssum = ft_sum_str(ssum, arg[i]);
	return (ssum);
}
