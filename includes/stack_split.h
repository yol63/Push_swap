/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_split.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:32:40 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:32:42 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_SPLIT_H
# define STACK_SPLIT_H

# include "two_stacks.h"

void	stack_split(t_two_stacks *two_stacks, int is_stack_a,
		int descending_order);
void	stack_partition(t_two_stacks *two_stacks);

#endif
