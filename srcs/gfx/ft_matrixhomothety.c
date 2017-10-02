/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixhomothety.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:44:31 by psebasti          #+#    #+#             */
/*   Updated: 2017/10/02 19:18:59 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_matrixhomothety(double **ret, int factor)
{
	if (ret)
	{
		ret[0][0] = factor;
		ret[1][1] = factor;
		ret[2][2] = factor;
		ret[3][3] = 1;
	}
}
