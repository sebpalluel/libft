/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:31:09 by psebasti          #+#    #+#             */
/*   Updated: 2017/08/19 20:32:32 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCT_H
# define LIBFT_STRUCT_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_char
{
	char			c;
	struct s_char	*next;
}					t_char;

typedef	struct		s_fd
{
	int				fd;
	int				pos;
	char			*path;
	t_char			*buffer;
	int				flags;
	int				rights;
}					t_fd;

typedef struct		s_vec3
{
	double			x;
	double			y;
	double			z;
}					t_vec3;

typedef struct		s_pix
{
	int				x;
	int				y;
	int				z;
}					t_pix;

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_color;

typedef struct		s_mlx
{
	void			*mlx_ptr;
	void			*win_ptr;
	void			*image;
	char			*image_addr;
}					t_mlx;

typedef struct		s_img
{
	void			*image;
	void			*image_addr;
	int				bbp;
	int				endian;
	int				size_x;
}					t_img;

#endif
