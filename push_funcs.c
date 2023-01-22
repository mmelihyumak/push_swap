/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:55:03 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/22 04:13:32 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_func(t_list **src, t_list **dest)
{
	int	i;
	
	(*dest)->size++;
	reverse_rotate_func(dest);
	(*dest)->array[0] = (*src)->array[0];
	i = -1;
	while (++i < (*src)->size)
		(*src)->array[i] = (*src)->array[i + 1];
	(*src)->size--;
	find_highest(*src);
	find_highest(*dest);
}

void	do_pa(t_list **src, t_list **dest)
{
	push_func(src, dest);
	write(1, "pa\n", 3);
}

void	do_pb(t_list **src, t_list **dest)
{
	push_func(src, dest);
	write(1, "pb\n", 3);
}
