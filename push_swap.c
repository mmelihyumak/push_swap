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

void	push_func(int **src, int **dest)
{
	int	*tmp;

	tmp = *src + 1;
	*dest = *src;
	*src = tmp;
}

void	swap_func(int *arr)
{
	int	tmp;

	tmp = *arr;
	*arr = *(arr + 1);
	*(arr + 1) = tmp;
	printf("sa\n");
}

void	reverse_rotate_func(int **arr, int size)
{
	int	*temp;
	int	*temp_arr;
	int	last;

	last = *(*arr + size - 1);
	temp = (*arr + size - 1);
	temp_arr = *arr;
	temp = temp + 1;
	temp = temp_arr;
	temp = temp - 1;
	*temp = last;
	*arr = temp;
	*(*arr + size) = 0;
	printf("rra\n");
}

void	rotate_func(int **arr, int size)
{
	int	tmp;

	tmp = **arr;
	*arr = ++*arr;
	*(*arr + (size - 1)) = tmp;
	printf("ra\n");
}

int	find_highest(int *arr, int size)
{
	int	index;
	int	highest;

	while (--size >= 1)
		if (arr[size] >= arr[size - 1])
			highest = arr[size];
		else
			highest = arr[size - 1];
	return (highest);
}

void	sort(int **array, int size)
{
	int	highest;

	highest = find_highest(*array, size);
	printf("highest: %d\n", find_highest(*array, size));
	if (*array[0] == highest)
		rotate_func(array, size);
	else if (*array[1] == highest)
		reverse_rotate_func(array, size);
	if (*array[0] > *array[1])
		swap_func(*array);
}

int main()
{

	int	*arr;
	int	*brr;
	int	size;

	arr = malloc(sizeof(int) * 3);
	brr = malloc(sizeof(int) * 3);
	brr[0] = 1;
	arr[0] = 2;
	arr[1] = 1;
	arr[2] = 3;
	size = 3;
	//rotate_func(&arr, size);
	//swap_func(arr, size);
	//push_func(&arr, &brr);
	//reverse_rotate_func(&arr, size);
	while (--size >= 0)
	{
		printf("a%d: %d\n", size, arr[size]);
	}
	size = 3;
	sort(&arr, size);
	while (--size >= 0)
	{
		printf("a%d: %d\n", size, arr[size]);
	}
	/*printf("b0: %d\n", brr[0]);
	printf("b1: %d\n", brr[1]);
	printf("a3: %d\n", arr[3]);
	printf("a4: %d\n", arr[4]);*/
	//printf("highest: %d\n", find_highest(arr, size));
	return (0);
}
