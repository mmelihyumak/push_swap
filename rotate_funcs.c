/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:34:16 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/16 02:34:16 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_func(t_list **stack)
{
	int	tmp;
	int	size;

	size = (*stack)->size;
	tmp = (*stack)->array[0];
	(*stack)->array = (*stack)->array + 1;
	(*stack)->array[size - 1] = tmp;
}

void	do_ra(t_list *stack_a)
{
	rotate_func(&stack_a);
	write(1, "ra\n", 3);
}

void	do_rb(t_list *stack_b)
{
	rotate_func(&stack_b);
	write(1, "rb\n", 3);
}

void	do_rr(t_list *stack_a, t_list *stack_b)
{
	rotate_func(&stack_a);
	rotate_func(&stack_b);
	write(1, "rr\n", 3);
}
