/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:35:17 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:35:19 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vector
{
	int	*vals;
	int	size;
	int	capacity;
}				t_vector;

void			vector_create(t_vector *vec);
void			vector_delete(t_vector *vec);
void			vector_add(t_vector *vec, int val);
int				vector_pop(t_vector *vec);

#endif
