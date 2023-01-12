/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:38:05 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/12 13:56:47 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(int *arr, int argc)
{
	return (0);
} 

void	stack_addback(t_stack **stack, t_stack *new)
{
	t_stack	*last;
	
	if (!new)
		return ;
	if (!stack)
	{
		*stack = new;
		return ;
	}
	last = get_stack_bottom(*stack);
	last->next = new;
}

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

t_stack	*init_stack(int argc, char **argv)
{
	t_stack	*stack;
	int	i;
	int	nb;


	nb = 0;
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (i == 1)
			stack = stack_new(nb);
		else
			stack_addback(&stack, stack_new(nb));
		i++;
	}
	return (stack);
}

int main(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*stack_a;
	int	i;

	stack = malloc(sizeof(t_stack));
	stack_a = malloc(sizeof(t_stack));
	stack_a = stack;
	while (argc < 2)
		return (0);
	stack = init_stack(argc, argv);
	sa_func(stack);
	ra_func(&stack);
	while (stack != NULL)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	return (0);	
}