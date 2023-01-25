/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:31:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 01:51:37 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size)
		printf("%d\n", stack->sortindex[i]);
	i = -1;
	while (++i < stack->size)
		printf("%d\n", stack->array[i]);
}

void	sortindexx(t_list **stack)
{
	int	size;
	int	i;
	int	j;

	size = (*stack)->size;
	i = 0;
	while ((*stack)->sortindex[i] != size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if ((*stack)->sortindex[i] == (*stack)->sortindex[j])
			{
				if ((*stack)->array[i] > (*stack)->array[j])
				{
					(*stack)->sortindex[i] += 1;
					break ;
				}
				else if ((*stack)->array[i] < (*stack)->array[j])
				{
					(*stack)->sortindex[j] += 1;
					break ;
				}
			}
			j++;
		}
		i++;
		if (i >= size)
			i = 0;
	}
}

void	init_sortindex(t_list **stack)
{
	int	i;
	int	size;

	size = (*stack)->size;
	i = -1;
	while (++i < size)
		(*stack)->sortindex[i] = 0;
	sortindexx(stack);
}

void	init_stack_a(t_list **stack, int size, char **argv)
{
	int	i;

	(*stack)->array = malloc(sizeof(int) * size);
	(*stack)->sortindex = malloc(sizeof(int) * size);
	i = 0;
	while (argv[i])
	{
		(*stack)->array[i] = (int)ft_atoi(argv[i]);
		i++;
	}
	(*stack)->size = size;
	find_highest(*stack);
	find_smallest(*stack);
	init_sortindex(stack);
}

int main(int argc, char **argv)
{
	char	**splitted;
	t_list	*stack_a;
	t_list	*stack_b;

	if (!check_all(argc, argv))
		return (0);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	stack_b->size = 0;
	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		init_stack_a(&stack_a, split_len(splitted), splitted);
		stack_b->array = malloc(sizeof(int) * split_len(splitted));
		stack_b->sortindex = malloc(sizeof(int) * split_len(splitted));
		if (!check_duplicate(stack_a))
			return (0);
	}
	else if (argc > 2)
	{
		splitted = set_argv(argv);
		if (!check_numbers(splitted))
			return (0);
		init_stack_a(&stack_a, control(argv), splitted);
		stack_b->array = malloc(sizeof(int) * split_len(splitted));
		stack_b->sortindex = malloc(sizeof(int) * split_len(splitted));
		if (!check_duplicate(stack_a))
			return (0);
	}
	if (stack_a->size <= 3)
		sort_small(&stack_a);
	else if (stack_a->size > 3 && stack_a->size < 6)
		sort_five(&stack_a, &stack_b);
	else if (stack_a->size > 5)
	{
		sort_algorithm(&stack_a, &stack_b);
	}
	//print_stack(stack_a);
	//printf("\nb\n");
	//print_stack(stack_b);
	system("leaks push_swap");
	return (0);
}
