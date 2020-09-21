/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:30:51 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:56:38 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	char	*line;
	int		*stack1;
	int		*stack2;

	if (argc == 1)
		return (0);
	stack1 = ft_checkdata(argc, argv);
	if (!(stack2 = (int*)malloc(sizeof(int) * (stack1[0] + 1))))
		exit(1);
	stack2[0] = 0;
	while (get_next_line(0, &line) != 0)
	{
		ft_command(stack1, stack2, line);
		free(line);
	}
	free(line);
	if (ft_istrue(stack1, stack2) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(stack1);
	free(stack2);
	stack1 = NULL;
	stack2 = NULL;
	return (0);
}
