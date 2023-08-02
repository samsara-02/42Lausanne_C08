/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:08:31 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 13:59:49 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03 ft_point.h Turn-in directory : ex03/ Files to turn in : ft_point.h
Allowed functions : None •Create a file ft_point.h that’ll compile the following
main: #include "ft_point.h" void set_point(t_point *point)
{
point->x = 42; point->y = 21;
}
int main(void)
{
t_point point; set_point(&point); return (0);
}
************************************************************************** 
https://www.digitalocean.com/community/tutorials/arrow-operator-c-plus-plus
https://www.geeksforgeeks.org/arrow-operator-in-c-c-with-examples/
https://www.ibm.com/docs/en/iis/11.7?topic=calls-c-header-file-functionsh
An Arrow operator in C/C++ allows to access elements in Structures and Unions. 
It is used
with a pointer variable pointing to a structure or union. The arrow operator is
formed by using a minus sign, followed by the greater than symbol as shown
below. Syntax:  

(pointer_name)->(variable_name)

Operation: The -> operator in C or C++ gives the value held by variable_name to
structure or union variable pointer_name. Difference between Dot(.) and
Arrow(->) operator:  
The Dot(.) operator is used to 
normally access members of a structure or union.
The Arrow(->) operator exists to 
access the members of the structure or the unions using pointers.
*/
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct point
{
	int	x;
	int	y;
}	t_point;
void	set_point(t_point *point);
#endif
