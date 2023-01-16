/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:38:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/16 03:38:17 by muyumak          ###   ########.fr       */
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
	printf("Array is already sorted!\n");
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

void	sort_small(int **array, int size)
{
	/*int	highest;

	if (is_sorted(*array, size))
		return ;
	highest = find_highest(*array, size);
	printf("highest: %d\n", highest);
	if (array[0][0] == highest)
		rotate_func(array, size);
	else if (array[0][1] == highest)
		reverse_rotate_func(array, size);
	if (array[0][0] > array[0][1])
		swap_func(array);*/
}
