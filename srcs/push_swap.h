/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:59 by duzun             #+#    #+#             */
/*   Updated: 2023/02/22 23:33:52 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_list
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		len_a;
	int		max;
}	t_list;

int				ft_sa(t_list *data);
int				ft_sb(t_list *data);
int				ft_ss(t_list *data);
int				ft_pa(t_list *data);
int				ft_pb(t_list *data);
int				ft_ra(t_list *data);
int				ft_rb(t_list *data);
int				ft_rr(t_list *data);
int				ft_rra(t_list *data);
int				ft_rrb(t_list *data);
int				ft_rrr(t_list *data);
int				ft_swap(t_stack **stack);
int				ft_rotate(t_stack **stack);
int				ft_rev_rotate(t_stack **stack);
int				ft_push(t_stack **stack_point_a, t_stack **stack_point_b);

void			ft_easy_sort(t_list *data);
void			ft_sort_three_2(t_list *data, t_stack *lst, int min, \
				int next_min);
void			ft_radix_sort(t_list *data);
int				ft_check_number(const char *s);
int				ft_master_check(char **arraytmp, int words);
int				ft_check_minmax(char **s);
int				ft_check_duplicate(char **arraytmp);
int				ft_check_sign(const char *s);
int				ft_null_check(char **av);
int				ft_words(char **av);
char			*ft_sum(char **s);
char			*ft_sum_str(char *ssum, const char *s);

int				ft_is_sorted(t_list *data);
int				ft_get_distance(t_stack **stack, int index);
void			ft_stack_index(t_stack **stack);
void			ft_free_stack(t_stack **stack);
// void			ft_free(char **s);

void			*ft_lstlast(t_stack *lst);
int				ft_lstsize(t_stack *lst);
void			ft_print_lst(t_stack *lst);

char			**ft_array_init(char **av);
void			ft_init_stacks(t_list *data);
void			ft_create_stacks(t_list *data,char **arraytmp, int list_size);
void			ft_init_index(t_list *data);;
void			ft_find_max(t_list *data);
#endif