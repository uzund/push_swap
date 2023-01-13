/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:59 by duzun             #+#    #+#             */
/*   Updated: 2023/01/13 20:22:15 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
# include "../libft/libft.h"

char	*ft_sum_str(char *ssum, const char *s);
int		ft_check_number(const char *s);
int		ft_master_check(char **arg);
int		ft_check_minmax(char **s);
void	ft_array_dup(int n);
char	*ft_sum(char **s);
#endif