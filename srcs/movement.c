/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:25:59 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 00:02:50 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_list *data)
{
	if (ft_swap(&data->stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	ft_sb(t_list *data)
{
	if (ft_swap(&data->stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ft_ss(t_list *data)
{	
	if ((ft_lstsize(data->stack_a) < 2) || (ft_lstsize(data->stack_b) < 2))
		return (-1);
	ft_swap(&data->stack_a);
	ft_swap(&data->stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

int	ft_ra(t_list *data)
{
	if (ft_rotate(&data->stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_rb(t_list *data)
{
	if (ft_rotate(&data->stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
