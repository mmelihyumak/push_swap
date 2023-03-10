/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:27:13 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/23 15:40:14 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	size_t	i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	check_c(str[i]);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	number *= sign;
	return (number);
}

void	check_c(char c)
{
	if (!(c >= 48 && c <= 57))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}
