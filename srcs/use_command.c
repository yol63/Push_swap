/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:29:36 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:46:35 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_use_command_s(int *stack)
{
	int	temp;

	temp = stack[1];
	stack[1] = stack[2];
	stack[2] = temp;
}

void	ft_use_command_r(int *stack)
{
	int	temp;
	int	i;

	i = 1;
	temp = stack[1];
	while (i < stack[0])
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
}

void	ft_use_command_rr(int *stack)
{
	int temp;
	int i;

	i = stack[0];
	temp = stack[i];
	while (i > 1)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = temp;
}

void	ft_use_command_p(int *a, int *b)
{
	int	i;

	i = 0;
	if (b[0] == 0)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	i = a[0] + 1;
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = b[1];
	i = 1;
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	a[0] = a[0] + 1;
	b[0] = b[0] - 1;
}
