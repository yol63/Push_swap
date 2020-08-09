/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:39:16 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:39:18 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_insertion_sort.h"
#include "stack_insertion_sort_utils.h"
#include "utils.h"
#include "sort_utils.h"

void	stack_insertion_sort(t_two_stacks *two_stacks)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			cur_elem;

	stack_a = &two_stacks->a;
	stack_b = &two_stacks->b;
	while (stack_size(stack_a) > 0)
	{
		cur_elem = select_elem(two_stacks);
		rotate_to_elem(two_stacks, STACK_A, cur_elem);
		insert_elem(two_stacks, cur_elem);
	}
	rotate_to_elem(two_stacks, STACK_B, find_max(stack_b->stack_vals,
				stack_size(stack_b)));
	while (stack_size(stack_b))
		two_stacks_command(two_stacks, CMD_PA);
}
