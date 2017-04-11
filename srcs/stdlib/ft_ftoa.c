/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:30:59 by psebasti          #+#    #+#             */
/*   Updated: 2017/03/27 19:37:37 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_ftoa(float f)
{
	int		before;
	float	after;
	int		tmp_int;
	char	*tmp_str;
	char	*result;

	before = f;
	after = f - before;
	tmp_int = after;
	while (after - tmp_int != 0)
	{
		after = after / 10;
		tmp_int = after;
	}
	result = ft_itoa(before);
	tmp_str = ft_strjoin(result, ".\0");
	free(result);
	result = ft_strjoin(tmp_str, ft_itoa(tmp_int));
	return (result);
}
