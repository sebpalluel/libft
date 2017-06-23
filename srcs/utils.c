/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 17:50:09 by psebasti          #+#    #+#             */
/*   Updated: 2017/05/03 17:58:33 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	ft_fractal_pthread(t_setup *setup, void *(*f)(void *tab))
{
	t_fract		tab[NUM_THREAD];
	pthread_t	t[NUM_THREAD];
	int			i;

	i = 0;
	while (i < NUM_THREAD)
	{
		ft_memcpy((void*)&tab[i], (void*)setup, sizeof(t_setup));
		tab[i].y = 100 * i;
		tab[i].y_max = 100 * (i + 1);
		i++;
	}
	i = 0;
	while (++i <= NUM_THREAD)
		pthread_create(&t[i - 1], NULL, (*f)(void *tab), &tab[i - 1]);
	while (i--)
		pthread_join(t[i], NULL);
	mlx_put_image_to_window(setup->mlx, MLX->win_ptr, IMG->image_addr, 1, 0);
}
