/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:55:03 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/17 17:30:22 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_func(t_list **src, t_list **dest)
{
	int	*tmp;
	int	i;

	tmp = (*src)->array + 1;
	(*dest)->array[(*dest)->size] = (*src)->array[0];
	(*src)->array = tmp;
	(*dest)->size++;
	(*src)->size--;
	reverse_rotate_func(dest);
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
