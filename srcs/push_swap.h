/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:59 by duzun             #+#    #+#             */
/*   Updated: 2023/01/14 05:51:16 by duzun            ###   ########.fr       */
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
int		ft_sort_master(char **arraya, int count);
int		ft_sort_all(int **arraya, int count);
int		ft_sort_five(int **arraya, int count);
int		ft_sort_three(int **arraya, int count);
int		ft_sort_two(int **arraya, int count);
int		ft_check_duplicate(char **arraytmp);
int		ft_check_null(const char *s);
void	ft_ra(int **arraya, int count);
void	ft_rb(int **arrayb, int count);
void	ft_sa(int *a, int *b);
void	ft_rra(int **arraya, int count);
void	ft_rrb(int **arrayb, int count);
void	ft_pb(int *a, int *b, int *len_a, int *len_b)

#endif