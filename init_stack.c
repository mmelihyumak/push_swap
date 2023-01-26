/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:00:03 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 08:30:32 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	help_sort(t_list **stack, int j, int i, int size)
{
	while (j < size)
	{
		if ((*stack)->sortindex[i] == (*stack)->sortindex[j])
		{
			if ((*stack)->array[i] > (*stack)->array[j])
			{
				(*stack)->sortindex[i] += 1;
				break ;
			}
			else if ((*stack)->array[i] < (*stack)->array[j])
			{
				(*stack)->sortindex[j] += 1;
				break ;
			}
		}
		j++;
	}
}

void	sortindexx(t_list **stack)
{
	int	size;
	int	i;
	int	j;

	size = (*stack)->size;
	i = 0;
	while ((*stack)->sortindex[i] != size - 1)
	{
		j = i + 1;
		help_sort(stack, j, i, size);
		i++;
		if (i >= size)
			i = 0;
	}
}

void	init_sortindex(t_list **stack)
{
	int	i;
	int	size;

	size = (*stack)->size;
	i = -1;
	while (++i < size)
		(*stack)->sortindex[i] = 0;
	sortindexx(stack);
}

void	init_stack_a(t_list **stack, int size, char **argv)
{
	int	i;

	(*stack)->array = malloc(sizeof(int) * size);
	(*stack)->sortindex = malloc(sizeof(int) * size);
	i = 0;
	while (argv[i])
	{
		(*stack)->array[i] = (int)ft_atoi(argv[i]);
		i++;
	}
	(*stack)->size = size;
	find_highest(*stack);
	find_smallest(*stack);
}
