/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:31:31 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 21:43:48 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algoritm_32(int *stack1)
{
	ft_use_command_s(stack1);
	write(1, "sa\n", 3);
	ft_use_command_rr(stack1);
	write(1, "rra\n", 4);
}

void	ft_algoritm_3(int *stack1)
{
	if (stack1[1] > stack1[2] && stack1[1] < stack1[3])
	{
		ft_use_command_s(stack1);
		write(1, "sa\n", 3);
	}
	else if (stack1[1] > stack1[2] && stack1[2] > stack1[3])
		ft_algoritm_32(stack1);
	else if (stack1[3] > stack1[2] && stack1[3] < stack1[1])
	{
		ft_use_command_r(stack1);
		write(1, "ra\n", 3);
	}
	else if (stack1[3] > stack1[1] && stack1[3] < stack1[2])
	{
		ft_use_command_s(stack1);
		write(1, "sa\n", 3);
		ft_use_command_r(stack1);
		write(1, "ra\n", 3);
	}
	else if (stack1[1] < stack1[2] && stack1[1] > stack1[3])
	{
		ft_use_command_rr(stack1);
		write(1, "rra\n", 4);
	}
}

void	ft_algoritm_4(int *stack1, int *stack2)
{
	if (ft_istrue(stack1, stack2) == 1)
		return ;
	ft_mintob(stack1, stack2, 3);
	ft_mintob(stack1, stack2, 2);
	ft_algoritm_2(stack1);
	ft_use_command_p(stack1, stack2);
	write(1, "pa\n", 3);
	ft_use_command_p(stack1, stack2);
	write(1, "pa\n", 3);
}

void	ft_algoritm_5(int *stack1, int *stack2)
{
	if (ft_istrue(stack1, stack2) == 1)
		return ;
	ft_mintob(stack1, stack2, 4);
	ft_mintob(stack1, stack2, 3);
	ft_algoritm_3(stack1);
	ft_use_command_p(stack1, stack2);
	write(1, "pa\n", 3);
	ft_use_command_p(stack1, stack2);
	write(1, "pa\n", 3);
}
