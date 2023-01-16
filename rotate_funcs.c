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
	printf("rra\n");
}

void	rotate_func(t_list **stack)
{
	int	tmp;
	int	size;

	size = (*stack)->size;
	tmp = (*stack)->array[0];
	(*stack)->array = (*stack)->array + 1;
	(*stack)->array[size - 1] = tmp;
	printf("ra\n");
}
