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

int main(int argc, char ** argv) {
    int* stack1;
    int* stack2;

    stack1 = ft_checkdata(argc,argv);
    if(!(stack2 = (int*)malloc(sizeof(int) * (stack1[0] + 1))))
        exit(1);
    stack2[0] = 0;
    ft_algoritm(stack1, stack2);

    int i = 0;
    while (i < stack1[0] + 1) {
        printf("=%d=", stack1[i]);
        i++;
    }

    i = 0;
    while (i < stack2[0] + 1) {
        printf("=e%d=", stack2[i]);
        i++;
    }

    if (ft_istrue(stack1, stack2) == 0)
        write(1,"KO\n",3);
    else
        write(1,"OK\n",3);
    write(1,"Hello\n",6);
    return(0);
}
