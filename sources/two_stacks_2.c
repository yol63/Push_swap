/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:42:40 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:42:42 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "two_stacks.h"
#include "utils.h"

void	two_stacks_command_sa(t_two_stacks *two_stacks)
{
	int		a1;
	int		a2;
	t_stack	*stack_a;

	stack_a = &two_stacks->a;
	if (stack_size(stack_a) < 2)
		return ;
	stack_pop(stack_a, &a1);
	stack_pop(stack_a, &a2);
	stack_push(stack_a, a1);
	stack_push(stack_a, a2);
}

void	two_stacks_command_sb(t_two_stacks *two_stacks)
{
	t_stack	*stack_b;
	int		b1;
	int		b2;

	stack_b = &two_stacks->b;
	if (stack_size(stack_b) < 2)
		return ;
	stack_pop(stack_b, &b1);
	stack_pop(stack_b, &b2);
	stack_push(stack_b, b1);
	stack_push(stack_b, b2);
}

void	two_stacks_command_ss(t_two_stacks *two_stacks)
{
	two_stacks_command_sa(two_stacks);
	two_stacks_command_sb(two_stacks);
}

void	two_stacks_command_pa(t_two_stacks *two_stacks)
{
	t_stack	*stack_b;
	t_stack	*stack_a;
	int		a;

	stack_b = &two_stacks->b;
	stack_a = &two_stacks->a;
	if (stack_pop(stack_b, &a))
		stack_push(stack_a, a);
}

void	two_stacks_command_pb(t_two_stacks *two_stacks)
{
	t_stack	*stack_b;
	t_stack	*stack_a;
	int		b;

	stack_b = &two_stacks->b;
	stack_a = &two_stacks->a;
	if (stack_pop(stack_a, &b))
		stack_push(stack_b, b);
}
