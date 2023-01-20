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

void	find_highest(t_list *stack)
{
	int	i;
	int	highest;

	i = 0;
	highest = (stack)->array[0];
	stack->index_highest = 0;
	while (++i < (stack)->size)
	{
		if (highest < (stack)->array[i])
		{
			highest = (stack)->array[i];
			(stack)->index_highest = i;
		}
	}
}

void	find_smallest(t_list *stack)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = (stack)->array[0];
	stack->index_smallest = 0;
	while (++i < (stack)->size)
	{
		if (smallest > (stack)->array[i])
		{
			smallest = (stack)->array[i];
			(stack)->index_smallest = i;
		}
	}
}

void	algorithm(t_list **stack)
{
	int	highest;
	int	smallest;

	//printf("highest: %d\n", (*stack)->index_highest);
	if (is_sorted(*stack))
		return ;
	if ((*stack)->index_highest == 0)
		do_ra(*stack);
	else if ((*stack)->index_highest == 1)
		do_rra(*stack);
	if ((*stack)->array[0] > (*stack)->array[1])
		do_sa(*stack);
	find_highest(*stack);
}

void	sort_small(t_list **stack_a)
{
	algorithm(stack_a);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = (*stack_a)->size - 2;
	if ((*stack_a)->index_smallest == 0 && (*stack_a)->index_highest == 1)
		do_sa(*stack_a);
	else if ((*stack_a)->index_highest > (*stack_a)->size / 2)
		while ((*stack_a)->index_highest != 0)
			do_rra(*stack_a);
	else if ((*stack_a)->index_highest <= (*stack_a)->size / 2)
		while ((*stack_a)->index_highest != 0)
			do_ra(*stack_a);
	while (--i != 0)
		do_pb(stack_a, stack_b);
	algorithm(stack_a);
	i = (*stack_b)->size + 1;
	while (--i != 0)
	{
		do_pa(stack_b, stack_a);
		if ((*stack_a)->index_highest == 0)
			do_ra(*stack_a);
	}
	if (!is_sorted(*stack_a))
		do_sa(*stack_a);
}
