/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:42:47 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 13:04:39 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
************************************************************************** 
Exercise 01
ft_boolean.h
Turn-in directory : ex01/
Files to turn in : ft_boolean.h
Allowed functions : None
•Create a ft_boolean.h file. 
•This program should display
I have an even number of arguments.
•or
I have an odd number of arguments.
COMMENTS
**************************************************************************
https://www.tutorialspoint.com/cprogramming/c_header_files.htm
https://www.programiz.com/c-programming/c-preprocessor-macros
https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/
Syntax suggested by hmorand
*/
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define TRUE	1
# define FALSE	0

typedef int	t_bool;

# define EVEN(nbr) ((nbr) % 2 == 0)

#endif