/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:50:45 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 21:11:34 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) == 1)
			i++;
		if (s[i] && ft_isspace(s[i]) == 0)
			n++;
		while (s[i] && ft_isspace(s[i]) == 0)
			i++;
	}
	return (n);
}
