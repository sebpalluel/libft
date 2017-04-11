/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:55:43 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 17:29:23 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_color			*ft_hexcolor(int hexValue)
{
	t_color		*col = NULL;

	col = ft_colornew((unsigned char)((hexValue >> 16) & 0xFF),\
			(unsigned char)((hexValue >> 8) & 0xFF),\
			(unsigned char)((hexValue) & 0xFF));

	return (col);
}
