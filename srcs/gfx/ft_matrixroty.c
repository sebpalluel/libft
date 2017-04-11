/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixroty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:47:59 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 13:48:15 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixroty(double **ret, double deg)
{
	double	c;
	double	s;

	c = cos(deg);
	s = sin(deg);
	if (ret)
	{
		ret[3][3] = 1;
		ret[0][0] = c;
		ret[0][2] = s;
		ret[1][1] = 1;
		ret[2][0] = -s;
		ret[2][2] = c;
	}
}
