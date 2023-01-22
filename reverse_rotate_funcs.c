/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_funcs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:04:56 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/22 03:53:38 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_func(t_list **stack)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * (*stack)->size);
	tmp_arr[0] = (*stack)->array[(*stack)->size - 1];
	i = 0;
	while (++i < (*stack)->size)
		tmp_arr[i] = (*stack)->array[i - 1];
	free((*stack)->array);
	(*stack)->array = tmp_arr;
	find_highest(*stack);
}

void	do_rra(t_list *stack_a)
{
	reverse_rotate_func(&stack_a);
	write(1, "rra\n", 4);
}

void	do_rrb(t_list *stack_b)
{
	reverse_rotate_func(&stack_b);
	write(1, "rrb\n", 4);
}

void	do_rrr(t_list *stack_a, t_list *stack_b)
{
	reverse_rotate_func(&stack_a);
	reverse_rotate_func(&stack_b);
	write(1, "rrr\n", 4);
}
