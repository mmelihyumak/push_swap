/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:34 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/18 00:53:28 by muyumak          ###   ########.fr       */
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
	
}t_list;

int		find_highest(t_list *stack);
void	sort_small(t_list **stack_a, t_list **stack_b);
void	reverse_rotate_func(t_list **stack);
void	rotate_func(t_list **stack);
void	swap_func(t_list **stack);
int		is_sorted(t_list *stack);
int		check_repeat(char **splitted);
int		ft_isdigit(int c);
void	push_func(t_list **src, t_list **dest);
int		ft_atoi(const char *str);
void	sort_bigger(t_list **stack_a, t_list **stack_b);
int		find_smallest(t_list *stack);
char	**ft_split(const char *s, char c);
int		check_spaces(char *argv);
int		check_digits(char **splitted);
int		check_all(char **splitted);
int		check_signs(char *argv);

#endif
