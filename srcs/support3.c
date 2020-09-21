/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:33:49 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:42:01 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_cpy(const int *stack1)
{
	int	*res;
	int	i;

	i = 0;
	if (!(res = (int*)malloc(sizeof(int) * stack1[0])))
		return (NULL);
	while (i < stack1[0])
	{
		res[i] = stack1[i + 1];
		i++;
	}
	return (res);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
