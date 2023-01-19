/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/18 09:55:36 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size)
		printf("%d\n", stack->array[i]);
}

void	init_stack_a(t_list **stack, int size, char **argv)
{
	int	i;

	(*stack)->array = malloc(sizeof(int) * size);
	i = 0;
	while (argv[i])
	{
		(*stack)->array[i] = ft_atoi(argv[i]);
		i++;
	}
	(*stack)->size = size;
	find_highest(stack);
	find_smallest(stack);
}

int main(int argc, char **argv)
{
	int	i;
	char	**splitted;
	t_list	*stack_a;
	t_list	*stack_b;

	if (!check_all(argc, argv))
		return (0);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	stack_b->array = malloc(sizeof(int) * (argc - 1));
	stack_b->size = 0;
	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		init_stack_a(&stack_a, split_len(splitted), splitted);
		if (!check_duplicate(stack_a))
			return (0);
	}
	else if (argc > 2)
	{
		init_stack_a(&stack_a, argc - 1, argv + 1);
		if (!check_duplicate(stack_a))
			return (0);
	}
	if (stack_a->size == 3)
		sort_small(&stack_a);
	else if (stack_a->size > 3 && stack_a->size < 6)
		sort_five(&stack_a, &stack_b);
	print_stack(stack_b);
	return (0);
}
