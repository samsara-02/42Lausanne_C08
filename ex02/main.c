/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:01:13 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 12:15:12 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = -42;
	printf("Absolute value of %d is:	%d\n", x, ABS(x));
	printf("Absolute value of %d is:	%d\n", y, ABS(y));
	printf("Absolute value of %d is:	%d\n", 0, ABS(0));
}
