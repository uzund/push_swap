/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:59 by duzun             #+#    #+#             */
/*   Updated: 2023/01/20 19:19:10 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;



char			*ft_sum_str(char *ssum, const char *s);
int				ft_check_number(const char *s);
int				ft_master_check(char **arraytmp, int words);
int				ft_check_minmax(char **s);
char			*ft_sum(char **s);
int				ft_sort_all(int **arraya, int count);
void			ft_sort_five(t_list **stack_a, t_list **stack_b);
// static void		ft_sort_four(t_list **stack_a, t_list **stack_b);
// static void		ft_sort_three(t_list **stack_a);
int				ft_check_duplicate(char **arraytmp);
int				ft_check_sign(const char *s);
int				ft_sa(t_list **stack_a);
int				ft_sb(t_list **stack_b);
int				ft_ss(t_list **stack_a, t_list **stack_b);
int				ft_ra(t_list **stack_a);
int				ft_rb(t_list **stack_b);
int				ft_rr(t_list **stack_a, t_list **stack_b);
int				ft_rotate(t_list **stack);
int				ft_rev_rotate(t_list **stack);
int				ft_rra(t_list **stack_a);
int				ft_rrb(t_list **stack_b);
int				ft_rrr(t_list **stack_a, t_list **stack_b);
int				ft_pa(t_list **stack_a, t_list **stack_b);
int				ft_pb(t_list **stack_a, t_list **stack_b);
int				ft_push(t_list **stack_point_a, t_list **stack_point_b);
void			ft_error(char *msg);
void			ft_free(char **s);
// static void		ft_first_stack(t_list **stack, int count, char **av);
void			ft_put_list(t_list *lst);
void			ft_stack_index(t_list **stack);
// static t_list	*ft_get_next_min(t_list **stack);
void			ft_stack_index(t_list **stack);
void			ft_free_stack(t_list **stack);
// static void		ft_sort_master(t_list **stack_a, t_list **stack_b);
void			ft_easy_sort(t_list **stack_a, t_list **stack_b);
// static int		ft_get_min(t_list **stack, int n);
// static void		ft_sort_three(t_list **stack_a);
int				ft_is_sorted(t_list **stack);
int				ft_get_distance(t_list **stack, int index);
void			ft_radix_sort(t_list **stack_a, t_list **stack_b);
// static int		ft_get_max_bits(t_list **stack);

t_list			*ft_lstnew(int content);
void			ft_lstadd_back(t_list **stack, t_list *new);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_front(t_list **stack, t_list *new);
int				ft_lstsize(t_list *lst);
int				ft_swap(t_list **stack);
void			ft_print_lst(t_list *lst);
void			ft_start_sort(char **arraytmp, int words);
int				ft_words(char **av);
int				ft_null_sort_check(char **av);
#endif