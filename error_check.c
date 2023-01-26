/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:20:17 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 08:33:48 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	char	**splitted;

	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		if (split_len(splitted) == 1)
		{
			if (ft_atoi(splitted[0]) > 2147483647
				|| ft_atoi(splitted[0]) < -2147483648)
				write(2, "Error\n", 6);
			if (!check_digits(*splitted))
				write(2, "Error\n", 6);
			return (0);
		}
		else if (split_len(splitted) == 0)
			return (0);
		free_func(splitted);
	}
	return (1);
}

int	digits(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!check_digits(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicate(t_list *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size - 1)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack->array[i] == stack->array[j])
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_all(int argc, char **argv)
{
	if (!check_args(argc, argv))
		return (0);
	if (!digits(argv + 1))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
