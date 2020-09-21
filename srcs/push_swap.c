/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:32:42 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:21:39 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int	*stack1;
	int	*stack2;

	if (argc == 1)
		return (0);
	stack1 = ft_checkdata(argc, argv);
	if (!(stack2 = (int*)malloc(sizeof(int) * (stack1[0] + 1))))
		exit(1);
	stack2[0] = 0;
	ft_algoritm(stack1, stack2);
	free(stack1);
	free(stack2);
	stack1 = NULL;
	stack2 = NULL;
	return (0);
}
