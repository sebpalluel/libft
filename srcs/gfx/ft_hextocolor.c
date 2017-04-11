/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_hextocolor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:53:51 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 17:32:18 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_hextocolor(t_color *col, int hexValue)
{
	if (col)
	{
		col->r = (unsigned char)((hexValue >> 16) & 0xFF);
		col->g = (unsigned char)((hexValue >> 8) & 0xFF);
		col->b = (unsigned char)((hexValue) & 0xFF);
	}
}
