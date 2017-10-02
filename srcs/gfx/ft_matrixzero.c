/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:40:30 by psebasti          #+#    #+#             */
/*   Updated: 2017/10/02 19:11:11 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		**ft_matrixzero(int size)
{
	double	**ret;
	int		x;
	int		y;

	ret = (double**)malloc(sizeof(double*) * size + 1);
	if (ret == NULL)
		return (NULL);
	x = -1;
	while (++x < size)
	{
		y = -1;
		ret[x] = (double*)malloc(sizeof(double) * size);
		if (ret[x] == NULL)
			return (NULL);
		while (++y < size)
			ret[x][y] = 0;
	}
	ret[size] = NULL;
	return (ret);
}
