/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:42:49 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:43:04 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "two_stacks.h"
#include "utils.h"

void	two_stacks_command_ra(t_two_stacks *two_stacks)
{
	stack_rotate_up(&two_stacks->a);
}

void	two_stacks_command_rb(t_two_stacks *two_stacks)
{
	stack_rotate_up(&two_stacks->b);
}

void	two_stacks_command_rr(t_two_stacks *two_stacks)
{
	two_stacks_command_ra(two_stacks);
	two_stacks_command_rb(two_stacks);
}

void	two_stacks_command_rra(t_two_stacks *two_stacks)
{
	stack_rotate_down(&two_stacks->a);
}

void	two_stacks_command_rrb(t_two_stacks *two_stacks)
{
	stack_rotate_down(&two_stacks->b);
}
