/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:32:42 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:56:13 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_mintob(int *stack1, int *stack2, int avg)
{
	int		minindex;
	int		i;

	minindex = 1;
	i = 1;
	while (i < stack1[0] + 1)
	{
		if (stack1[i] < stack1[minindex])
			minindex = i;
		i++;
	}
	if (minindex < avg)
		ft_use_rb(stack1, stack2, minindex, 0);
	else
		ft_use_rrb(stack1, stack2, stack1[0] - minindex, 0);
}

void		ft_algoritm_2(int *stack1)
{
	if (stack1[1] > stack1[2])
	{
		ft_use_command_s(stack1);
		write(1, "sa\n", 3);
	}
}

void		ft_ret_instacka(int *stack1, int *stack2)
{
	int		i;
	int		maxindex;

	while (stack2[0] != 0)
	{
		maxindex = 1;
		i = 1;
		while (i < stack2[0] + 1)
		{
			if (stack2[i] > stack2[maxindex])
				maxindex = i;
			i++;
		}
		if (maxindex < stack2[0] / 2)
			ft_use_rb(stack2, stack1, maxindex, 1);
		else
			ft_use_rrb(stack2, stack1, stack2[0] - maxindex, 1);
	}
}

void		ft_algoritm_100(int *stack1, int *stack2, int chanksnum)
{
	int		*chanks;
	int		num;
	int		j;

	j = 0;
	if (ft_istrue(stack1, stack2) == 1)
		return ;
	chanks = ft_sort(stack1, chanksnum);
	while (j < chanksnum - 1)
	{
		num = ft_search_number(stack1, chanks, j);
		while (num != -1)
		{
			if (num < stack1[0] / 2)
				ft_use_rb(stack1, stack2, num, 0);
			else
				ft_use_rrb(stack1, stack2, stack1[0] - num, 0);
			num = ft_search_number(stack1, chanks, j);
		}
		j++;
	}
	ft_ret_instacka(stack1, stack2);
	free(chanks);
	chanks = NULL;
}

void		ft_algoritm(int *stack1, int *stack2)
{
	if (stack1[0] == 2)
		ft_algoritm_2(stack1);
	else if (stack1[0] == 3)
		ft_algoritm_3(stack1);
	else if (stack1[0] == 4)
		ft_algoritm_4(stack1, stack2);
	else if (stack1[0] == 5)
		ft_algoritm_5(stack1, stack2);
	else if (stack1[0] < 250)
		ft_algoritm_100(stack1, stack2, 6);
	else
		ft_algoritm_100(stack1, stack2, 12);
}
