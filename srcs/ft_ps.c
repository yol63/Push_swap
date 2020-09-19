/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:32:42 by romarash          #+#    #+#             */
/*   Updated: 2020/09/19 14:32:46 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ret_instacka(int* stack1, int* stack2)
{
    int i;
    int maxindex;

    ft_use_command_p(stack2,stack1);
    write(1,"pa\n",3);
    while(stack2[0] != 0)
    {
        maxindex = 1;
        i = 1;
        while(i < stack2[0] + 1)
        {
            if(stack2[i] > stack2[maxindex])
                maxindex = i;
            i++;
        }
        printf("index = %d,maxcount = %d\n",maxindex ,stack2[maxindex]);
        if (maxindex < stack2[0] / 2)
            ft_use_rb(stack2,stack1 ,maxindex,1);
        else
            ft_use_rrb(stack2, stack1,stack2[0] - maxindex,1);
    }
}

void ft_algoritm_100(int* stack1, int*stack2)
{
    int* chanks;
    int num;
    int j;

    j = 0;
    if (ft_istrue(stack1, stack2) == 1)
        return ;
    chanks = ft_sort(stack1,6);
    while (j < 5)
    {
        num = ft_search_number(stack1, chanks, j);
        while (num != -1)
        {
            printf("num = %d\n", num);
            if (num < stack1[0] / 2)
                ft_use_rb(stack1,stack2 ,num,0);
            else
                ft_use_rrb(stack1, stack2,stack1[0] - num,0);
            num = ft_search_number(stack1, chanks, j);
        }
        j++;
        int i = 0;
        while (i < stack2[0] + 1)
        {
            printf("=e%d=", stack2[i]);
            i++;
        }
    }
    ft_ret_instacka(stack1,stack2);
}

void    ft_algoritm(int *stack1, int*stack2)
{
    if(stack1[0] == 3)
        ft_algoritm_3(stack1);
   else if(stack1[0] == 5)
        ft_algoritm_5(stack1,stack2);
     else //if(stack1[0] == 100)
        ft_algoritm_100(stack1,stack2);
/*    else if(stack1[0] == 500)
        ft_algoritm_500(stack1,stack2);
    else
        ft_algoritm_univers(stack1,stack2);*/
}

