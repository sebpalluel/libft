/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 18:51:11 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/16 18:55:02 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t		ft_randint(int length)
{
	uint32_t	rand;
	uint32_t	ret;

	ret = 0;
	while (ft_intlen(ret) < length || ret == 0)
	{
		rand = ft_rand();
		rand = ft_hash32(rand);
		ret *= 10;
		ret += rand % 10;
	}
	return (ret);
}
