/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixrotx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:47:16 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 17:22:13 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixrotx(double **ret, double deg)
{
	double	c;
	double	s;

	c = cos(deg);
	s = sin(deg);
	if (ret)
	{
		ret[3][3] = 1;
		ret[0][0] = 1;
		ret[1][1] = c;
		ret[1][2] = -s;
		ret[2][1] = s;
		ret[2][2] = c;
	}
}
