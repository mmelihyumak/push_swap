/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 01:19:32 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/12 13:12:13 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_func(t_stack *stack_a)
{
	int	tmp;
	
	if (stack_a->value > stack_a->next->value)
	{
		tmp = stack_a->value;
		stack_a->value = stack_a->next->value;
		stack_a->next->value = tmp;	
		write(1, "sa\n", 3);
	}
}