/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_insertion_sort_utils2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:40:48 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:40:49 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_insertion_sort_utils.h"
#include "utils.h"
#include "sort_utils.h"

void	rotate_to_elem(t_two_stacks *two_stacks, int is_stack_a, int val)
{
	t_stack		*stack;
	t_distance	dist;
	int			i;
	t_cmd		cmd;

	stack = (is_stack_a) ? &two_stacks->a : &two_stacks->b;
	dist = distance_to(stack, val);
	i = dist.val;
	while (i-- > 0)
	{
		if (dist.dir == DIRECTION_DOWN)
			cmd = (is_stack_a) ? CMD_RRA : CMD_RRB;
		else
			cmd = (is_stack_a) ? CMD_RA : CMD_RB;
		two_stacks_command(two_stacks, cmd);
	}
}

void	insert_with_rotation(t_two_stacks *two_stacks, int val, int size)
{
	int		*arr;
	int		i;
	int		pos;

	arr = two_stacks->b.stack_vals;
	pos = -1;
	i = 0;
	while (i++ < size)
	{
		if (
			(arr[idx_before(i - 1, size)] > arr[i - 1] &&
			(val > arr[idx_before(i - 1, size)] || val < arr[i - 1]))
			||
			(val > arr[idx_before(i - 1, size)] && val < arr[i - 1]))
		{
			pos = arr[idx_before(i - 1, size)];
			break ;
		}
	}
	rotate_to_elem(two_stacks, STACK_B, pos);
	two_stacks_command(two_stacks, CMD_PB);
}

void	insert_elem(t_two_stacks *two_stacks, int val)
{
	int		size;
	int		*arr;

	size = stack_size(&two_stacks->b);
	arr = two_stacks->b.stack_vals;
	if (size == 0)
		two_stacks_command(two_stacks, CMD_PB);
	else if (size == 1)
	{
		two_stacks_command(two_stacks, CMD_PB);
		if (val < arr[0])
			two_stacks_command(two_stacks, CMD_SB);
	}
	else
		insert_with_rotation(two_stacks, val, size);
}
