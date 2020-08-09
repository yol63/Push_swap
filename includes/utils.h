/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:35:08 by romarash          #+#    #+#             */
/*   Updated: 2020/08/09 14:35:10 by romarash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "two_stacks_operation.h"

void	error(const char *message);
int		*clone_array(int *array, int size);
int		find_in_array(int *arr, int size, int val);
int		abs(int i);
int		find_max(int *arr, int size);
int		chtoi(char ch);
int		as_int(const char *term, int size);
int		one_of(char ch, const char *str);
int		has_duplicates(int *arr, int size);
t_cmd	get_cmd(const char *cmd);
int		is_sign(char c, char c2);
int		sum_secure(int x, int a);
int		mply_secure(int x, int a);

#endif
