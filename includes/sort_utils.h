/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:30:48 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:30:51 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_UTILS_H
# define SORT_UTILS_H

# define ORDER_NOT_DEFINED 100
# define ORDER_DESCEND (-1)
# define ORDER_ASCEND 1
# define ORDER_NOT 2

# define STACK_A 1
# define STACK_B 0
# define DESCENDING_ORDER 1
# define ASCENDING_ORDER 0

typedef struct	s_merge_sort_input
{
	int	*array;
	int	lo;
	int	mid;
	int	hi;
	int	*aux;
}				t_merge_sort_input;

int				is_sorted(int *array, int size);
void			merge(t_merge_sort_input *input);
void			merge_sort_impl(int *array, int lo, int hi, int *aux);
void			merge_sort(int *array, int size);
int				middle_val(int *array, int size);

#endif
