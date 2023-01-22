/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:55:57 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/21 16:58:14 by muyumak          ###   ########.fr       */
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

	i = -1;
	while (arg[++i])
		if ((arg[i] < 48 || arg[i] > 57) && (arg[i] != ' ' && arg[i] != '-' && arg[i] != '+'))
			return (0);
	i = -1;
	while (arg[++i])
		if (arg[i] >= 48 && arg[i] <= 57)
			if (arg[i + 1] == '-' || arg[i + 1] == '+')
				return (0);
	return (1);
}
