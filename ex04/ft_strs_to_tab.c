/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:10:04 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 14:38:33 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_stock_str.h"
#include <stdlib.h> //Required for free() &malloc()

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	s;

	i = 0;
	s.size = 1;
	s.str = "Fuck";
	s.copy = "f";
	while (i < ac)
	{
		i++;
	}
	return (s);
}
/*
/*Used for debugging
#include <stdio.h>

int	main(int ac, char **av)
{
	ft_strs_to_tab(ac, av);
}
*/