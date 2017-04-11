/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixtranslate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:43:04 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 13:44:42 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixtranslate(double **ret, t_vec3 *vec)
{
	if (ret && vec)
	{
		ret[0][0] = 1;
		ret[1][1] = 1;
		ret[2][2] = 1;
		ret[3][3] = 1;
		ret[0][3] = vec->x;
		ret[1][3] = vec->y;
		ret[2][3] = vec->z;
	}
}
