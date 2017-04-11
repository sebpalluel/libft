/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:40:30 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 13:40:52 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		**ft_matrixzero(int size)
{
	double	**ret = NULL;
	int		xy[2];

	if (!(ret = (double**)malloc(sizeof(double*) * size + 1)))
		return (NULL);
	xy[0] = -1;
	while (++xy[0] < size)
	{
		xy[1] = -1;
		if (!(ret[xy[0]] = (double*)malloc(sizeof(double) * size)))
			return (NULL);
		while (++xy[1] < size)
			ret[xy[0]][xy[1]] = 0;
	}
	ret[size] = NULL;
	return (ret);
}
