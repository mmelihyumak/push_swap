/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_funcs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:04:56 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/18 22:04:56 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_func(t_list **stack)
{
	int	*tmp;
	int	i;
	int	j;
	int	last;
	int	size;

	size =(*stack)->size;
	last = (*stack)->array[size - 1];
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return ;
	tmp[0] = last;
	i = 0;
	j = -1;
	while (++j < size - 1)
		tmp[++i] = (*stack)->array[j];
	(*stack)->array = tmp;
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
