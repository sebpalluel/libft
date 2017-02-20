/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:04:42 by psebasti          #+#    #+#             */
/*   Updated: 2017/02/20 16:04:52 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getnbr(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (str[0] == '-')
		return (-ft_getnbr(&str[1]));
	while (ft_isdigit(str[i]) == 1)
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}
