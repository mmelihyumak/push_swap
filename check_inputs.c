/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:55:57 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/18 09:55:55 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	split_len(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
		i++;
	return (i);
}

int	check_digits(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if ((arg[i] < 48 || arg[i] > 57) && arg[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_space(char *first_arg)
{
	int	i;

	if (first_arg[0] == ' ' || first_arg[ft_strlen(first_arg) - 1] == ' ')
		return (0);
	i = -1;
	while (first_arg[++i])
	{
		if (first_arg[i] == ' ' && first_arg[i + 1] == ' ')
			return (0);
	}
	return (1);
}
