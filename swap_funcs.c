/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:39:56 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/21 17:47:42 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_func(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->array[0];
	(*stack)->array[0] = (*stack)->array[1];
	(*stack)->array[1] = tmp;
	find_highest(*stack);
}

void	do_sa(t_list *stack_a)
{
	swap_func(&stack_a);
	write(1, "sa\n", 3);
}

void	do_sb(t_list *stack_b)
{
	swap_func(&stack_b);
	write(1, "sb\n", 3);
}

void	do_ss(t_list *stack_a, t_list *stack_b)
{
	swap_func(&stack_a);
	swap_func(&stack_b);
	write(1, "ss\n", 3);
}
