/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:28:18 by romarash          #+#    #+#             */
/*   Updated: 2020/09/19 14:28:25 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_countnumber(char** src)
{
    int i;

    i = 0;
    while(src[i])
        i++;
    return (i);
}

int ft_countnumberr(char** src)
{
    int i;
    int j;
    int n;

    i = 0;
    j = 0;
    n = 0;
    while(src[i])
    {

    }
    return (n);
}

int			*ft_chartoint(char** src)
{
    int     i;
    int     j;
    int     n;
    int*    res;

    n = ft_countnumber(src);
///    printf("n = %d\n",n);
    i = 1;
    if(!(res = (int*)malloc(sizeof(int) * (n + 1))))
            exit(1);
    res[0] = n;
    while(i < n + 1)
    {
        j = 1;
        while(j < i)
        {
///            printf("i = %d, j = %d, res = %d\n",i,j,ft_atoi(src[i - 1]));
            if(res[j] == ft_atoi(src[i - 1]))
            {
                write(1,"repeat number\n",14);
                exit(1);
            }
            j++;
        }
        res[i] = ft_atoi(src[i - 1]);
        i++;
    }
    return(res);
}

int *ft_checkdata_alot(int argc,char **argv)
{
   int i;
   char *res;
   char **arr;
   int *ress;

   i = 1;
   res = ft_strnew(0);

///    int k = 0;
///    while(argv[k])
///    {
///        printf("a%sa \n",argv[k]);
///        k++;
///   }

   while (i < argc)
    {
        if(ft_isnumber(argv[i]) == 0)
        {
            write(1,"No number!\0",11);
            exit(1);
        }
        res = ft_strjoinee(res,argv[i]);
        i++;
    }
///    i = 0;
///   while(res[i])
///    {
///        printf("b%cb \n",res[i]);
///        i++;
///    }
    arr = ft_strsplit(res);

///    i = 0;
///    while(arr[i])
///   {
///        printf("c%sc \n",arr[i]);
///        i++;
///    }

    ress = ft_chartoint(arr);
    free(res);
    ft_free_arr(arr);
///    free(*arr);
///    res = NULL;
///    arr = NULL;
    return(ress);
}
