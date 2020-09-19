/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:20:45 by romarash          #+#    #+#             */
/*   Updated: 2020/09/19 14:21:48 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoinee(char *s1, char *s2)
{
    size_t	n;
    size_t	i;
    char	*res;

    n = 0;
    i = 0;
    if (!s1 || !s2 || !(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 2)))
        return (NULL);
    while (s1[i])
        res[n++] = s1[i++];
    i = 0;
        res[n] = ' ';
    n++;
    while (s2[i])
        res[n++] = s2[i++];
    res[n] = '\0';
    free(s1);
    s1 = NULL;
    return (res);
}

int ft_isnumber(char* ch)
{
    int i;
    int flag;

    i = 0;
    flag = 0;

    while(ch[i])
    {
        if (ft_isdigit(ch[i]) == 1)
            flag = 1;
        if((ft_isdigit(ch[i]) != 0 || ft_isspace(ch[i]) != 0) || ((ch[i] =='+' || ch[i] =='-') && (ch[i + 1] && ft_isdigit(ch[i + 1]) == 1)))
            i++;
        else
            return (0);
    }
    if (flag == 0)
        return(0);
    return (1);
}
