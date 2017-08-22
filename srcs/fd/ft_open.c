/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:33:45 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/21 19:50:52 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fd		ft_open(const char *path, char *name, int flags, int rights)
{
	char	*tmp;
	int		fd;

	if (path == NULL && name == NULL)
		return ((t_fd){-1, 0, NULL, NULL, NULL, 0, 0});
	else
		tmp = ft_strjoin(path, name);
	if ((fd = open(tmp, flags, rights)) < 0)
	{
		free (tmp);
		return ((t_fd){-1, 0, NULL, NULL, NULL, 0, 0});
	}
	free (tmp);
	return ((t_fd){fd, 0, (char *)path, name, NULL, flags, rights});
}
