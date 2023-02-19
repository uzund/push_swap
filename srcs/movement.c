/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:25:59 by duzun             #+#    #+#             */
/*   Updated: 2023/02/19 17:56:54 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_info *info)
{
	if (ft_swap(&info->stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	ft_sb(t_info *info)
{
	if (ft_swap(&info->stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ft_ss(t_info *info)
{	
	if ((ft_lstsize(info->stack_a) < 2) || (ft_lstsize(info->stack_b) < 2))
		return (-1);
	ft_swap(&info->stack_a);
	ft_swap(&info->stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

int	ft_ra(t_info *info)
{
	if (ft_rotate(&info->stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_rb(t_info *info)
{
	if (ft_rotate(&info->stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
