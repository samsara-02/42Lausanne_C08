/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:00:00 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 11:25:13 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
************************************************************************** 
Exercise 00
ft.h
Turn-in directory : ex00/
Files to turn in : ft.h
Allowed functions : None
•Create your ft.h file.
•It should countain the prototypes of all the following functions:
void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
**************************************************************************
https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/
HEADER PROTECTION EXEMPLE
#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <stdio.h>
# define FOO "bar"
int g_variable;
struct s_struct;
#endif
*/

#ifndef FT_H
# define FT

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char	*str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
#endif