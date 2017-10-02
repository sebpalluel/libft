/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:01:20 by psebasti          #+#    #+#             */
/*   Updated: 2017/10/02 19:15:23 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	custom(char *command, char *tmp, char *file_path, int mode)
{
	char *tmp2;

	tmp2 = NULL;
	if (mode)
	{
		tmp2 = ft_strjoin(tmp, file_path);
		command = ft_strjoin("chmod ", tmp2);
		free(tmp2);
	}
	system(command);
	free(command);
	if (tmp != NULL)
		free(tmp);
	if (file_path != NULL)
		free(file_path);
}

size_t		ft_create_file(t_fd *fd, int chmod)
{
	char	*file_path;
	char	*command;
	char	*tmp;
	int		len;

	file_path = ft_strjoin(fd->path, fd->name);
	command = ft_strjoin("touch ", file_path);
	if (file_path == NULL && command == NULL)
		return (ERROR);
	else
		custom(command, NULL, NULL, 0);
	len = ft_strlen(ft_itoa(chmod));
	tmp = ft_strnew(len + 1);
	tmp = ft_strdup(ft_itoa(chmod));
	tmp[len] = ' ';
	tmp[len + 1] = '\0';
	if (tmp == NULL && command == NULL)
		return (ERROR);
	else
		custom(command, tmp, file_path, 1);
	return (OK);
}
