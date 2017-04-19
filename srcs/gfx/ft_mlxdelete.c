/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlxdelete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 21:08:06 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/18 21:57:45 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_mlxdelete(t_mlx *mlx)
{
	if (mlx)
	{
		if (mlx->mlx_ptr && mlx->win_ptr)
		{
			mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
			free(mlx->mlx_ptr);
		}
		free(mlx);
	}
}
