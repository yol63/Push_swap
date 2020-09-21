/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:30:51 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:04:57 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*ft_checkdata_one(char **argv)
{
	char	**arr;
	int		*res;

	if (ft_isnumber(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	arr = ft_strsplit(argv[1]);
	res = ft_chartoint(arr);
	ft_free_arr(arr);
	return (res);
}

int			*ft_checkdata(int argc, char **argv)
{
	int		*res;

	if (argc > 2)
		res = ft_checkdata_alot(argc, argv);
	else if (argc == 2)
		res = ft_checkdata_one(argv);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (res);
}

int			ft_istrue(int const *stack1, int const *stack2)
{
	int i;

	i = 1;
	if (stack2[0] != 0 || stack1[0] == 0)
		return (0);
	while (i < stack1[0])
	{
		if (stack1[i] >= stack1[i + 1])
			return (0);
		i++;
	}
	return (1);
}
