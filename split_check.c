/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyumak <muyumak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:30:01 by muyumak           #+#    #+#             */
/*   Updated: 2023/01/26 07:38:14 by muyumak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	control(char **argv)
{
	char	**strings;
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (argv[i])
	{
		strings = ft_split(argv[i], ' ');
		len += split_len(strings);
		free_func(strings);
		i++;
	}
	return (len);
}

char	**set_argv(char **argv)
{
	char	**strings;
	char	**tmp;
	int		i;
	int		j;
	int		k;

	strings = malloc(sizeof(char *) * (control(argv) + 1));
	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		tmp = ft_split(argv[i], ' ');
		j = 0;
		while (tmp[j])
		{
			strings[k] = tmp[j];
			j++;
			k++;
		}
		free(tmp);
		i++;
	}
	strings[k] = 0;
	return (strings);
}

void	free_func(char **strings)
{
	int	i;

	i = -1;
	while (strings[++i])
		free(strings[i]);
	free(strings);
}

int	check_numbers(char **splitted)
{
	int	i;

	i = -1;
	while (splitted[++i])
	{
		if (ft_atoi(splitted[i]) < -2147483648
			|| ft_atoi(splitted[i]) > 2147483647)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
