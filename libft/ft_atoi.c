/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:46:13 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 21:19:12 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_check(const char *str, int *flag)
{
	size_t			i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == ' ' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*flag = 1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (i);
}

int					ft_atoi(const char *str)
{
	long int		res;
	size_t			i;
	int				flag;
	int				a;

	a = 0;
	i = 0;
	res = 0;
	flag = 0;
	i = ft_check(str, &flag);
	while (str[i] >= 48 && str[i] <= 57 && a <= 10)
	{
		res = res * 10 + (long int)(str[i] - 48);
		i++;
		a++;
	}
	if (a > 10 || (res > 2147483647 && flag == 0)
			|| (res > 2147483648 && flag == 1))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (flag == 1)
		return ((int)res * (-1));
	return ((int)res);
}
