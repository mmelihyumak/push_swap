/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/16 02:31:17 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	init_stack_a(t_list **stack, int size, char **argv)
{
	int	i;

	(*stack)->array = malloc(sizeof(int) * size);
	i = 0;
	while (argv[i + 1])
	{
		(*stack)->array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	(*stack)->size = size;
}


int main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));

	init_stack_a(&stack_a, argc - 1, argv);

	printf("1: %d\n", stack_a->array[0]);
	printf("2: %d\n", stack_a->array[1]);
	printf("3: %d\n", stack_a->array[2]);
	printf("highest: %d\n", find_highest(stack_a));
	printf("1: %d\n", stack_a->array[0]);
	printf("2: %d\n", stack_a->array[1]);
	printf("3: %d\n", stack_a->array[2]);
	return (0);
}
