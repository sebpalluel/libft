/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 16:39:39 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/19 17:37:16 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uintmax_t	ft_random(uintmax_t min, uintmax_t max, uintmax_t res)
{
	return (ft_randint(res) % (max - min + 1) + min);
}
