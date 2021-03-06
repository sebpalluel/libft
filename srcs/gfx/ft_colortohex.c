/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colortohex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:52:54 by psebasti          #+#    #+#             */
/*   Updated: 2017/10/24 18:00:22 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_colortohex(t_color *col)
{
	if (col)
		return ((col->r & 0xff) << 16) + \
		((col->g & 0xff) << 8) + (col->b & 0xff);
	return (0);
}
