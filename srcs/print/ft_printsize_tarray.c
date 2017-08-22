/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsize_tarray.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 18:59:32 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/22 19:00:48 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printsize_tarray(size_t **map, size_t width, size_t height)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (j > 0)
				ft_putchar(' ');
			ft_putnbr(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
