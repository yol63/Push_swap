/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:31:02 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:31:04 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct
{
	int	size;
	int	*stack_vals;
	int	cur_ptr;
}		t_stack;

int		stack_create(t_stack *stack, int size);
void	stack_delete(t_stack *stack);
void	stack_copy(t_stack *dst_stack, const t_stack *src_stack);
void	stack_rotate_up(t_stack *stack);
void	stack_rotate_down(t_stack *stack);
void	stack_init(t_stack *stack, int size, int *vals);
void	stack_push(t_stack *stack, int val);
int		stack_pop(t_stack *stack, int *val);
int		stack_peek(t_stack *stack);
int		stack_size(t_stack *stack);

#endif
