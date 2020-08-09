/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:29:53 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:30:01 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_LIST_H
# define OPERATION_LIST_H

# include "two_stacks_operation.h"

typedef struct	s_operation_node
{
	t_cmd					cmd;
	struct s_operation_node	*next;
}				t_operation_node;

typedef struct	s_operation_list
{
	t_operation_node		*op;
	int						size;
}				t_operation_list;

void			operation_list_create(t_operation_list *op_list);
void			operation_list_delete(t_operation_list *op_list);
void			operation_list_add(t_operation_list *op_list, t_cmd cmd);
void			operation_list_copy(t_operation_list *dst_list,
							const t_operation_list *src_list);

#endif
