/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:34 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/21 17:45:50 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int	*array;
	int	size;
	int	index_highest;
	int	index_smallest;
}t_list;

void	find_smallest(t_list *stack);
void	find_highest(t_list *stack);
void	sort_small(t_list **stack_a);
void	reverse_rotate_func(t_list **stack);
void	rotate_func(t_list **stack);
void	swap_func(t_list **stack);
int		is_sorted(t_list *stack);
int		check_repeat(char **splitted);
int		ft_isdigit(int c);
void	push_func(t_list **src, t_list **dest);
int		ft_atoi(const char *str);
void	sort_bigger(t_list **stack_a, t_list **stack_b);
char	**ft_split(const char *s, char c);
int		check_space(char *first_arg);
int		check_digits(char *arg);
int		digits(char **argv);
int		check_signs(char *argv);
void	do_pa(t_list **src, t_list **dest);
void	do_pb(t_list **src, t_list **dest);
void	do_ra(t_list *stack_a);
void	do_rb(t_list *stack_b);
void	do_rr(t_list *stack_a, t_list *stack_b);
void	do_rra(t_list *stack_a);
void	do_rrb(t_list *stack_b);
void	do_rrr(t_list *stack_a, t_list *stack_b);
void	do_sa(t_list *stack_a);
void	do_sb(t_list *stack_b);
void	do_ss(t_list *stack_a, t_list *stack_b);
int		split_len(char **splitted);
int		check_all(int argc, char **argv);
int		check_duplicate(t_list *stack);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	print_stack(t_list *stack);

#endif
