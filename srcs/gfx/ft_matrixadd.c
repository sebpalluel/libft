/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:45:39 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 13:46:10 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixadd(double **ret, double **m, double **n, int size)
{
	int		xy[2];

	if (ret && m && n)
	{
		xy[0] = -1;
		while (++xy[0] < size)
		{
			xy[1] = -1;
			while (++xy[1] < size)
				ret[xy[0]][xy[1]] = m[xy[0]][xy[1]] + n[xy[0]][xy[1]];
		}
	}
}
