/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sotr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:33:19 by romarash          #+#    #+#             */
/*   Updated: 2020/09/19 14:33:24 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_sortsort(int* stack1)
{
    int* res;
    int i;
    int j;

    i = 0;
    j = 0;
    res = ft_cpy(stack1);

    while (i < stack1[0]) {
        printf("a=%d=  ", res[i]);
        i++;
    }

    i = 0;
    while (i < stack1[0])
    {
        j = 0;
        while (j < stack1[0])
        {
            if (res[i] < res[j])
                ft_swap(&res[i],&res[j]);
            j++;
        }
        i++;
    }


    i = 0;
    while (i < stack1[0]) {
        printf("b=%d= ", res[i]);
        i++;
    }
    return(res);
}

int *ft_sort(int* stack1, int size)
{
    int* res;
    int* temp;
    int i;
    int j;

    if(!(res = (int*)malloc(sizeof(int) * size)))
        return(NULL);
    temp = ft_sortsort(stack1);
    i = 0;
    j = 0;
    while(j < size - 1)
    {
        res[j] = temp[i];
        i = i + (stack1[0] / (size - 1));
        j++;
    }
    res[j] = temp[stack1[0] - 1];
    i = 0;
    while (i < size) {
        printf("c=%d= ", res[i]);
        i++;
    }
    return(res);
}

int ft_search_number(int*  stack1, int *chanks,int mode)
{
    int  i;
    int res1;
    int res2;

    i = 1;
    res1 = -1;
    res2 = -1;
    while(i < stack1[0] + 1 && res1 == -1)
    {
        if (stack1[i] >= chanks[mode] && stack1[i] < chanks[mode + 1])
            res1 = i;
        i++;
    }
    i = stack1[0];
    while(i > 0 && res2 == -1)
    {
        if (stack1[i] >= chanks[mode] && stack1[i] < chanks[mode + 1])
            res2 = i;
        i--;
    }
    if (res1 < stack1[0] - res2)
        return(res1);
    else
        return (res2);
}

void ft_use_rb(int* stack1,int* stack2 ,int num, int mode)
{
   int i;

   i = 0;
   while (i < num - 1)
   {
       ft_use_command_r(stack1);
       if (mode == 0)
           write(1,"ra\n",3);
       if (mode == 1)
           write(1,"rb\n",3);
       i++;
   }
    ft_use_command_p(stack2,stack1);
    if (mode == 0)
        write(1,"pb\n",3);
    if (mode == 1)
        write(1,"pa\n",3);
}

void ft_use_rrb(int* stack1,int* stack2 ,int num,int mode)
{
    int i;

    i = 0;
    while (i <= num)
    {
        ft_use_command_rr(stack1);
        if (mode == 0)
            write(1,"rra\n",4);
        if (mode == 1)
            write(1,"rrb\n",4);
        i++;
    }
    ft_use_command_p(stack2,stack1);
    if (mode == 0)
        write(1,"pb\n",3);
    if (mode == 1)
        write(1,"pa\n",3);
}

