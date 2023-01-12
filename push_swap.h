/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:38:14 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/12 12:57:58 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	value;
	struct s_stack	*next;
}t_stack;

int		ft_atoi(const char *str);
void	sa_func(t_stack *stack_a);
void	ra_func(t_stack **stack_a);
t_stack	*get_stack_bottom(t_stack *stack);

#endif