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
}

int main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	i;
	char	**splitted;
	
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	stack_b->array = malloc(sizeof(int) * (argc - 1));
	init_stack_a(&stack_a, argc - 1, argv);
	if (stack_a->array[0] == 0)
		return (0);
	sort_small(&stack_a, &stack_b);
	return (0);
}
