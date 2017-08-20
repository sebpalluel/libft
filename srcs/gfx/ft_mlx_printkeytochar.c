/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_printkeytochar.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:36:03 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/20 19:14:39 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_specialchar(int keycode)
{
	if (keycode == DOT_KEY)
		return ('.');
	else if (keycode == MINUS)
		return ('-');
	return ('\0');
}

char		ft_mlx_printkeytochar(int keycode)
{
	char 	c;

	if (((c = ft_mlx_keytoint(keycode)) != '\0') || \
			((c = ft_mlx_keytoletterchar(keycode)) != '\0') || \
		((c = ft_specialchar(keycode) != '\0')))
		return (c);
	return ('\0');
}
