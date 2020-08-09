/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:32:54 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:32:56 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWO_STACKS_H
# define TWO_STACKS_H

# include "stack.h"
# include "operation_list.h"

typedef struct			s_two_stacks
{
	t_stack				a;
	t_stack				b;
	t_operation_list	op_list;
}						t_two_stacks;

void					two_stacks_create(t_two_stacks *two_stacks, int size);
void					two_stacks_init(t_two_stacks *two_stacks, int *vals,
		int size);
void					two_stacks_delete(t_two_stacks *two_stacks);
void					two_stacks_copy(t_two_stacks *dst_stacks,
		t_two_stacks *src_stacks);
void					two_stacks_command_sa(t_two_stacks *two_stacks);
void					two_stacks_command_sb(t_two_stacks *two_stacks);
void					two_stacks_command_ss(t_two_stacks *two_stacks);
void					two_stacks_command_pa(t_two_stacks *two_stacks);
void					two_stacks_command_pb(t_two_stacks *two_stacks);
void					two_stacks_command_ra(t_two_stacks *two_stacks);
void					two_stacks_command_rb(t_two_stacks *two_stacks);
void					two_stacks_command_rr(t_two_stacks *two_stacks);
void					two_stacks_command_rra(t_two_stacks *two_stacks);
void					two_stacks_command_rrb(t_two_stacks *two_stacks);
void					two_stacks_command_rrr(t_two_stacks *two_stacks);
void					two_stacks_rest_command(t_two_stacks *two_stacks,
												t_cmd cmd);
void					two_stacks_command(t_two_stacks *two_stacks,
		t_cmd cmd);

#endif
