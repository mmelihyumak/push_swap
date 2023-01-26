/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:14:10 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 02:17:18 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_maxbit(t_list *stack_a)
{
	int	maxbit;

	maxbit = 0;
	while (stack_a->sortindex[stack_a->index_highest] >> maxbit != 0)
		maxbit++;
	return (maxbit);
}

void	sort_algorithm(t_list **stack_a, t_list **stack_b)
{
	int	maxbit;
	int	i;
	int	j;
	int	size;

	i = 0;
	size = (*stack_a)->size;
	maxbit = get_maxbit(*stack_a);
	while (!is_sorted(*stack_a) && i < maxbit)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->sortindex[0] >> i) & 1) == 1)
				do_ra(*stack_a);
			else
				do_pb(stack_a, stack_b);
			j++;
		}
		while ((*stack_b)->size != 0)
			do_pa(stack_b, stack_a);
		i++;
	}
}
