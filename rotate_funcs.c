/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:34:16 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 01:45:36 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_func(t_list **stack)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * (*stack)->size);
	while (++i < (*stack)->size - 1)
		tmp_arr[i] = (*stack)->array[i + 1];
	tmp = (*stack)->array[0];
	free((*stack)->array);
	(*stack)->array = tmp_arr;
	(*stack)->array[(*stack)->size - 1] = tmp;
	find_highest(*stack);
	find_smallest(*stack);
	rotate_sort(*stack);
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
