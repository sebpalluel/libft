/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:16:07 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/11 14:16:15 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_imgclean(t_img *img, size_t width, size_t height)
{
	t_pix			pix;
	unsigned int	index;

	pix.y = 0;
	while (pix.y < (int)height)
	{
		pix.x = 0;
		while (pix.x < (int)width)
		{
			index = (pix.y * img->size_x) + (pix.x * (img->bbp >> 3));
			img->image_addr[index] = 0;
			img->image_addr[index + 1] = 0;
			img->image_addr[index + 2] = 0;
			pix.x++;
		}
		pix.y++;
	}
}
