/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:39:34 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:39:35 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "operation_list.h"
#include "utils.h"

void	operation_list_create(t_operation_list *op_list)
{
	op_list->op = NULL;
	op_list->size = 0;
}

void	operation_list_delete(t_operation_list *op_list)
{
	t_operation_node	*cur;
	t_operation_node	*next;

	cur = op_list->op;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	op_list->size = 0;
	op_list->op = NULL;
}

void	operation_list_add(t_operation_list *op_list, t_cmd cmd)
{
	t_operation_node	*new_node;
	t_operation_node	**cur;

	new_node = (t_operation_node*)malloc(sizeof(t_operation_node));
	if (!new_node)
		error("Error\n");
	new_node->next = NULL;
	new_node->cmd = cmd;
	cur = &op_list->op;
	while (*cur)
	{
		cur = &((*cur)->next);
	}
	*cur = new_node;
	++op_list->size;
}

void	operation_list_copy(t_operation_list *dst_list,
							const t_operation_list *src_list)
{
	t_operation_node	*cur;

	operation_list_delete(dst_list);
	cur = src_list->op;
	while (cur)
	{
		operation_list_add(dst_list, cur->cmd);
		cur = cur->next;
	}
}
