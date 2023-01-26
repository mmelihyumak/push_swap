/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 08:29:08 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	helper_function(t_list *stack_a, t_list *stack_b, char **argv)
{
	char	**splitted;

	splitted = set_argv(argv);
	init_stack_a(&stack_a, split_len(splitted), splitted);
	stack_b->array = malloc(sizeof(int) * split_len(splitted));
	stack_b->sortindex = malloc(sizeof(int) * split_len(splitted));
	free_func(splitted);
	if (!check_duplicate(stack_a))
		return (0);
	init_sortindex(&stack_a);
	return (1);
}

int	help_function(t_list *stack_a, t_list *stack_b, char **argv)
{
	char	**splitted;

	splitted = set_argv(argv);
	if (!check_numbers(splitted))
		return (0);
	init_stack_a(&stack_a, control(argv), splitted);
	stack_b->array = malloc(sizeof(int) * split_len(splitted));
	stack_b->sortindex = malloc(sizeof(int) * split_len(splitted));
	free_func(splitted);
	if (!check_duplicate(stack_a))
		return (0);
	init_sortindex(&stack_a);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!check_all(argc, argv))
		return (0);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	stack_b->size = 0;
	if (argc == 2)
	{
		if (!helper_function(stack_a, stack_b, argv))
			return (0);
	}
	else if (argc > 2)
		if (!help_function(stack_a, stack_b, argv))
			return (0);
	if (stack_a->size <= 3)
		algorithm(&stack_a);
	else if (stack_a->size > 3 && stack_a->size < 6)
		sort_five(&stack_a, &stack_b);
	else if (stack_a->size > 5)
		sort_algorithm(&stack_a, &stack_b);
	free_arrays(stack_b);
	return (0);
}
