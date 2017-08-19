/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:01:20 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/19 23:58:26 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_create_file(t_fd *fd, char *filename, int chmod)
{
	char	*touch_file;
	char	*chmod_file;
	char	space;

	space = ' ';
	fd->path = ft_strjoin(fd->path, filename);
	touch_file = ft_strjoin("touch ", fd->path);
	chmod_file = ft_strjoin("chmod ", ft_strncat(ft_itoa(chmod), &space, 1));
	chmod_file = ft_strjoin(chmod_file, fd->path);
	if (chmod_file != NULL && touch_file != NULL)
	{
		system(touch_file);
		system(chmod_file);
		free(chmod_file);
		free(touch_file);
		return (OK);
	}
	return (ERROR);
}
