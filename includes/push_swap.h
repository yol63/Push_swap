/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:19:13 by romarash          #+#    #+#             */
/*   Updated: 2020/09/21 21:33:20 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void	ft_algoritm_32(int *stack1);
void	ft_algoritm_3(int *stack1);
void	ft_algoritm_2(int *stack1);
void	ft_mintob(int *stack1, int *stack2, int avg);
void	ft_algoritm_4(int *stack1, int *stack2);
void	ft_algoritm_5(int *stack1, int *stack2);
int		*ft_checkdata_one(char **argv);
int		*ft_checkdata(int argc, char **argv);
int		ft_istrue(int const *stack1, int const *stack2);
void	ft_command_s(int *stack1, int *stack2, char const *command);
void	ft_command_r(int *stack1, int *stack2, char const *command);
void	ft_command_rr(int *stack1, int *stack2, char const *command);
void	ft_command_p(int *stack1, int *stack2, char const *command);
void	ft_command(int *stack1, int *stack2, char const *command);
int		*ft_sortsort(int *stack1);
int		*ft_sort(int *stack1, int size);
int		ft_search_number(int *stack1, int *chanks, int mode);
void	ft_use_rb(int *stack1, int *stack2, int num, int mode);
void	ft_use_rrb(int *stack1, int *stack2, int num, int mode);
void	ft_ret_instacka(int *stack1, int *stack2);
void	ft_algoritm_100(int *stack1, int *stack2, int chanksnum);
void	ft_algoritm(int *stack1, int *stack2);
char	*ft_strjoinee(char *s1, char *s2);
int		ft_isnumber(char *ch);
size_t	ft_count(char const *s);
int		ft_countnumber(char **src);
int		*ft_chartoint(char **src);
int		*ft_checkdata_alot(int argc, char **argv);
int		*ft_cpy(const int *stack1);
void	ft_swap(int *a, int *b);
void	ft_use_command_s(int *stack);
void	ft_use_command_r(int *stack);
void	ft_use_command_rr(int *stack);
void	ft_use_command_p(int *a, int *b);

#endif
