/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:17:51 by psebasti          #+#    #+#             */
/*   Updated: 2017/10/01 19:39:54 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_imgdel(t_img *img, void *mlx)
{
	if (img)
	{
		if (mlx && img->image)
			mlx_destroy_image(mlx, img->image);
		free(img);
	}
}
