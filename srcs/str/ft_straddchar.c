/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 21:04:34 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/30 21:19:30 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_straddchar(char *src, char c)
{
	char	*dest;
	size_t	length;

	length = ft_strlen(src) + 1;
	if (!(dest = (char*)ft_memalloc(length + 1)))
		return (NULL);
	ft_memcpy((void*)dest, (void*)src, length);
	dest[length] = c;
	dest[length + 1] = '\0';
	return (dest);
}
