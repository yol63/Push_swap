/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:42:31 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:42:33 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "two_stacks.h"
#include "utils.h"

void	two_stacks_create(t_two_stacks *two_stacks, int size)
{
	stack_create(&two_stacks->a, size);
	stack_create(&two_stacks->b, size);
	operation_list_create(&two_stacks->op_list);
}

void	two_stacks_init(t_two_stacks *two_stacks, int *vals, int size)
{
	stack_init(&two_stacks->a, size, vals);
}

void	two_stacks_delete(t_two_stacks *two_stacks)
{
	stack_delete(&two_stacks->a);
	stack_delete(&two_stacks->b);
	operation_list_delete(&two_stacks->op_list);
}

void	two_stacks_copy(t_two_stacks *dst_stacks, t_two_stacks *src_stacks)
{
	stack_copy(&dst_stacks->a, &src_stacks->a);
	stack_copy(&dst_stacks->b, &src_stacks->b);
	operation_list_copy(&dst_stacks->op_list, &src_stacks->op_list);
}
