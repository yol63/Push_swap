/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:30:10 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 21:59:43 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_command_s(int *stack1, int *stack2, char const *command)
{
	if (ft_strcmp(command, "sa") == 0)
		ft_use_command_s(stack1);
	if (ft_strcmp(command, "sb") == 0)
		ft_use_command_s(stack2);
	if (ft_strcmp(command, "ss") == 0)
	{
		ft_use_command_s(stack1);
		ft_use_command_s(stack2);
	}
}

void	ft_command_r(int *stack1, int *stack2, char const *command)
{
	if (ft_strcmp(command, "ra") == 0)
		ft_use_command_r(stack1);
	if (ft_strcmp(command, "rb") == 0)
		ft_use_command_r(stack2);
	if (ft_strcmp(command, "rr") == 0)
	{
		ft_use_command_r(stack1);
		ft_use_command_r(stack2);
	}
}

void	ft_command_rr(int *stack1, int *stack2, char const *command)
{
	if (ft_strcmp(command, "rra") == 0)
		ft_use_command_rr(stack1);
	if (ft_strcmp(command, "rrb") == 0)
		ft_use_command_rr(stack2);
	if (ft_strcmp(command, "rrr") == 0)
	{
		ft_use_command_rr(stack1);
		ft_use_command_rr(stack2);
	}
}

void	ft_command_p(int *stack1, int *stack2, char const *command)
{
	if (ft_strcmp(command, "pa") == 0)
		ft_use_command_p(stack1, stack2);
	if (ft_strcmp(command, "pb") == 0)
		ft_use_command_p(stack2, stack1);
}

void	ft_command(int *stack1, int *stack2, char const *command)
{
	if (ft_strcmp(command, "sa") == 0 || ft_strcmp(command, "sb") == 0
			|| ft_strcmp(command, "ss") == 0)
		ft_command_s(stack1, stack2, command);
	else if (ft_strcmp(command, "ra") == 0 || ft_strcmp(command, "rb") == 0
			|| ft_strcmp(command, "rr") == 0)
		ft_command_r(stack1, stack2, command);
	else if (ft_strcmp(command, "rra") == 0 || ft_strcmp(command, "rrb") == 0
			|| ft_strcmp(command, "rrr") == 0)
		ft_command_rr(stack1, stack2, command);
	else if (ft_strcmp(command, "pa") == 0 || ft_strcmp(command, "pb") == 0)
		ft_command_p(stack1, stack2, command);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}
