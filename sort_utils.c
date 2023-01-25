/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:38:53 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 01:42:10 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sort(t_list *stack)
{
	int	tmp;

	tmp = (stack)->sortindex[0];
	(stack)->sortindex[0] = (stack)->sortindex[1];
	(stack)->sortindex[1] = tmp;
}

void	rotate_sort(t_list *stack)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * (stack)->size);
	while (++i < (stack)->size - 1)
		tmp_arr[i] = (stack)->sortindex[i + 1];
	tmp = (stack)->sortindex[0];
	free((stack)->sortindex);
	(stack)->sortindex = tmp_arr;
	(stack)->sortindex[(stack)->size - 1] = tmp;
}
void	reverse_rotate_sort(t_list *stack)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * (stack)->size);
	tmp_arr[0] = (stack)->sortindex[(stack)->size - 1];
	i = 0;
	while (++i < (stack)->size)
		tmp_arr[i] = (stack)->sortindex[i - 1];
	free((stack)->sortindex);
	(stack)->sortindex = tmp_arr;
}
void	push_sort(t_list *src, t_list *dest)
{
	int	i;

	(dest)->sortindex[0] = (src)->sortindex[0];
	i = -1;
	while (++i < (src)->size)
		(src)->sortindex[i] = (src)->sortindex[i + 1];
}