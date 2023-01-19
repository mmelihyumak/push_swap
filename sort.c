/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:38:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/18 01:01:25 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack)
{
	int	i;
	int	number;

	i = -1;
	while (++i < stack->size - 1)
		if (stack->array[i] > stack->array[i + 1])
			return (0);
	return (1);
}

void	find_highest(t_list **stack)
{
	int highest;
	int	i;

	i = 0;
	highest = (*stack)->array[0];
	while (++i < (*stack)->size)
	{
		if (highest < (*stack)->array[i])
		{
			highest = (*stack)->array[i];
			(*stack)->index_highest = i;
		}
	}
}

void	find_smallest(t_list **stack)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = (*stack)->array[0];
	while (++i < (*stack)->size)
		if (smallest > (*stack)->array[i])
		{
			smallest = (*stack)->array[i];
			(*stack)->index_smallest = i;
			printf("i: %d\n", i);
		}
}

void	algorithm(t_list **stack)
{
	int	highest;
	int	smallest;

	if (is_sorted(*stack))
		return ;
	if ((*stack)->index_highest == 0)
		do_ra(*stack);
	else if ((*stack)->index_highest == 1)
		do_rra(*stack);
	if ((*stack)->array[0] > (*stack)->array[1])
		do_sa(*stack);
}

void	sort_small(t_list **stack_a)
{
	algorithm(stack_a);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	do_pb(stack_a, stack_b);
	do_pb(stack_a, stack_b);
	printf("highesta: %d\n", (*stack_a)->index_highest);
	printf("smallesta: %d\n", (*stack_a)->index_smallest);
	printf("highestb: %d\n", (*stack_b)->index_highest);
	printf("smallestb: %d\n", (*stack_b)->index_smallest);
}
