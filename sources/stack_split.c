/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:42:08 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:42:10 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_split.h"
#include "sort_utils.h"

void	stack_split(t_two_stacks *two_stacks, int is_stack_a,
					int descending_order)
{
	t_stack	*stack;
	int		*arr;
	int		middle;
	int		i;
	int		size;

	stack = (is_stack_a) ? &two_stacks->a : &two_stacks->b;
	arr = stack->stack_vals;
	size = stack_size(stack);
	i = 0;
	if (size < 3 || is_sorted(arr, size) == ORDER_NOT_DEFINED ||
		(is_sorted(arr, size) == ((descending_order) ? ORDER_DESCEND :
								ORDER_ASCEND)))
	{
		while (i++ < size)
			two_stacks_command(two_stacks, (is_stack_a) ? CMD_PB : CMD_PA);
		return ;
	}
	middle = middle_val(arr, size);
	while (i++ < size)
		if ((descending_order && stack_peek(stack) <= middle) ||
				(!descending_order && stack_peek(stack) > middle))
			two_stacks_command(two_stacks, (is_stack_a) ? CMD_PB : CMD_PA);
		else
			two_stacks_command(two_stacks, (is_stack_a) ? CMD_RA : CMD_RB);
}

void	stack_partition(t_two_stacks *two_stacks)
{
	stack_split(two_stacks, STACK_A, DESCENDING_ORDER);
	while (stack_size(&two_stacks->b))
		stack_split(two_stacks, STACK_B, ASCENDING_ORDER);
}
