/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:43:22 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:43:24 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <limits.h>

void	error(const char *message)
{
	write(2, message, ft_strlen(message));
	exit(-1);
}

int		*clone_array(int *array, int size)
{
	int		*new_arr;
	int		i;

	new_arr = (int*)malloc(sizeof(int) * size);
	if (!new_arr)
		exit(-1);
	i = 0;
	while (i < size)
	{
		new_arr[i] = array[i];
		++i;
	}
	return (new_arr);
}

int		sum_secure(int x, int a)
{
	if (((x > 0) && (a > INT_MAX - x)) || ((x < 0) && (a < INT_MIN - x)))
		error("Error\n");
	return (x + a);
}

int		mply_secure(int x, int a)
{
	if (x == 0 || a == 0)
		return (0);
	if (((a == -1) && (x == INT_MIN)) || ((x == -1) && (a == INT_MIN)))
		error("Error\n");
	if ((a > 0 && x > 0) || (a < 0 && x < 0))
	{
		if (a > INT_MAX / x)
			error("Error\n");
	}
	else if ((a < 0 && a < INT_MIN / x) || (x < 0 && x < INT_MIN / a))
		error("Error\n");
	return (x * a);
}
