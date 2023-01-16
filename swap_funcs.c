/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:39:56 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/16 23:39:56 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_func(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->array[0];
	(*stack)->array[0] = (*stack)->array[1];
	(*stack)->array[1] = tmp;
	printf("sa\n");
}

