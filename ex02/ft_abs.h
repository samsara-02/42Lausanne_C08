/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:28:01 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 12:45:31 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
************************************************************************** 
Exercise 02 : ft_abs.h
Turn-in directory : ex02/
Files to turn in : ft_abs.h
Allowed functions : None
•Create a macro ABS which replaces its argument by it absolute value:
#define ABS(Value)
Norminette must be launched with the -R CheckDefine flag.
Moulinette will use it too.
COMMENTS
**************************************************************************
https://www.thegeekstuff.com/2013/04/c-macros-inline-functions/
https://www.programiz.com/c-programming/ternary-operator
https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Macros.html
*/

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) (Value < 0) ? -Value : Value

#endif