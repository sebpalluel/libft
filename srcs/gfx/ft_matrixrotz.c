/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixrotz.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:48:41 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 13:50:11 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixrotz(double **ret, double deg)
{
	double	c;
	double	s;

	c = cos(deg);
	s = sin(deg);
	if (ret)
	{
		ret[3][3] = 1;
		ret[2][2] = 1;
		ret[0][0] = c;
		ret[0][1] = -s;
		ret[1][0] = s;
		ret[1][1] = c;
	}
}
