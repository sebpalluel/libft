/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:33:45 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/19 21:57:11 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fd		ft_open(const char *path, int flags, int rights)
{
	char	*tmp;
	int		fd;

	if (path == NULL)
	{
		return ((t_fd){-1, 0, NULL, NULL, 0, 0});
	}
	if ((fd = open(path, flags, rights)) < 0)
	{
		return ((t_fd){-1, 0, NULL, NULL, 0, 0});
	}
	if ((tmp = ft_strdup(path)) == NULL)
		return ((t_fd){-1, 0, NULL, NULL, 0, 0});
	return ((t_fd){fd, 0, tmp, NULL, flags, rights});
}
