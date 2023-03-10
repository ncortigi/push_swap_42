/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <ncortigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:14:05 by ncortigi          #+#    #+#             */
/*   Updated: 2023/03/13 14:24:09 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftt/libft.h"
# include "../libftprintf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacks
{
	int				value;
	int				i;
	int				pos;
	int				target_pos;
	int				costa;
	int 			costb;
	struct s_stacks	*next;
}	t_stacks;

int				check_input(char **av);
int				number_cmp(char *s1, char *s2);
int				limits(char *str);
t_stacks		*take_last(t_stacks *stack);
void			put_first(t_stacks **stack, t_stacks *new);
void			add_to_stack_bot(t_stacks **stack, t_stacks *new);
t_stacks		*create(int ac, char **av);
void			put_index(t_stacks *stack, int size);
int				check_sort(t_stacks *stack);
void			rr(t_stacks **stack_a, t_stacks **stack_b);
void			rotate(t_stacks **stack, int which);
void			ss(t_stacks **stack_a, t_stacks **stack_b);
void			swap(t_stacks **stack, int which);
void			push(t_stacks **src, t_stacks **dest, int which);
void			rrr(t_stacks **stack_a, t_stacks **stack_b);
void			r_rotate(t_stacks **stack, int which);
void			ft_tree_elem(t_stacks **stack_a);
void			ft_two_elem(t_stacks **stack_a);
int				search_max_i(t_stacks *stack);
int 			find_position(t_stacks *stack, t_stacks *to_find);
void			put_pos(t_stacks **stack_a);
void			put_target_pos(t_stacks **stack_a, t_stacks **stack_b);
int				calc_size(t_stacks *stack);
int				my_abs(int num);
void			sort(t_stacks **stack_a, t_stacks **stack_b, int size);
void			big_sort(t_stacks **stack_a, t_stacks **stack_b);
void			choose_best_move(t_stacks **stack_a, t_stacks **stack_b, int cost_a, int cost_b);

#endif