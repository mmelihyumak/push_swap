/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:34 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/16 02:31:34 by muyumak          ###   ########.fr       */
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
void	sort_small(int **array, int size);
void	reverse_rotate_func(t_list **stack);
void	rotate_func(t_list **stack);
void	swap_func(t_list **stack);
int		is_sorted(t_list *stack);
int		check_repeat(int *arr, int size);
int		ft_isdigit(int c);
void	push_func(int **src, int **dest, int *size);
int		ft_atoi(const char *str);

#endif
