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
	while (++i < stack->size -1)
		if (stack->array[i] > stack->array[i + 1])
			return (0);
	//printf("Array is already sorted!\n");
	return (1);
}

int	find_highest(t_list *stack)
{
	int highest;
	int	size;

	size = stack->size;
	highest = stack->array[size - 1];
	while (--size >= 0)
		if (highest < stack->array[size])
			highest = stack->array[size];
	return (highest);
}

void	algorithm(t_list **stack)
{
	int	highest;
	int	smallest;
	
	if (is_sorted(*stack))
		return ;
	highest = find_highest(*stack);
	smallest = find_smallest(*stack);
	//printf("smallest: %d\n", smallest);
	if ((*stack)->array[0] == highest)
		rotate_func(stack);
	else if ((*stack)->array[1] == highest)
		reverse_rotate_func(stack);
	if ((*stack)->array[0] > (*stack)->array[1])
		swap_func(stack);
}

int	find_smallest(t_list *stack)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = stack->array[0];
	while (++i < stack->size)
		if (smallest > stack->array[i])
			smallest = stack->array[i];
	return (smallest);
}

void	sort_bigger(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->size != 3)
			push_func(stack_a, stack_b);
}

void	sort_small(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->size > 3)
		sort_bigger(stack_a, stack_b);
	algorithm(stack_a);
}
