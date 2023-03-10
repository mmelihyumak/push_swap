/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:34 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/27 17:29:40 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int	*array;
	int	size;
	int	index_highest;
	int	index_smallest;
	int	*sortindex;
}t_list;

void	find_smallest(t_list *stack);
void	find_highest(t_list *stack);
void	reverse_rotate_func(t_list **stack);
void	rotate_func(t_list **stack);
void	swap_func(t_list *stack);
int		is_sorted(t_list *stack);
void	push_func(t_list **src, t_list **dest);
long	ft_atoi(char *str);
char	**ft_split(const char *s, char c);
int		check_digits(char *arg);
int		digits(char **argv);
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
int		control(char **argv);
char	**set_argv(char **argv);
int		check_numbers(char **splitted);
void	check_c(char c);
void	sort_algorithm(t_list **stack_a, t_list **stack_b);
int		get_maxbit(t_list *stack_a);
void	init_sortindex(t_list **stack);
void	sortindexx(t_list **stack);
void	swap_sort(t_list *stack);
void	rotate_sort(t_list *stack);
void	reverse_rotate_sort(t_list *stack);
void	push_sort(t_list *src, t_list *dest);
void	free_func(char **strings);
void	init_stack_a(t_list **stack, int size, char **argv);
int		helper_function(t_list *stack_a, t_list *stack_b, char **argv);
int		help_function(t_list *stack_a, t_list *stack_b, char **argv);
void	algorithm(t_list **stack);
void	free_arrays(t_list *stack_b);

#endif
