/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:28:18 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 22:39:40 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_countnumber(char **src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void		ft_exit(int exitcode)
{
	write(1, "Error\n", 6);
	exit(exitcode);
}

int			*ft_chartoint(char **src)
{
	int		i;
	int		j;
	int		n;
	int		*res;

	n = ft_countnumber(src);
	i = 1;
	if (!(res = (int*)malloc(sizeof(int) * (n + 1))))
		exit(1);
	res[0] = n;
	while (i < n + 1)
	{
		j = 1;
		while (j < i)
		{
			if (res[j] == ft_atoi(src[i - 1]))
				ft_exit(1);
			j++;
		}
		res[i] = ft_atoi(src[i - 1]);
		i++;
	}
	return (res);
}

int			*ft_checkdata_alot(int argc, char **argv)
{
	int		i;
	char	*res;
	char	**arr;
	int		*ress;

	i = 1;
	res = ft_strnew(0);
	while (i < argc)
	{
		if (ft_isnumber(argv[i]) == 0)
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		res = ft_strjoinee(res, argv[i]);
		i++;
	}
	arr = ft_strsplit(res);
	ress = ft_chartoint(arr);
	free(res);
	ft_free_arr(arr);
	res = NULL;
	arr = NULL;
	return (ress);
}
