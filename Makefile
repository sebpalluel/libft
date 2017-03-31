#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/10 23:29:24 by psebasti          #+#    #+#             *#
#*   Updated: 2017/03/31 15:31:28 by psebasti         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	=	libft.a
SRC		=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c	\
			ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c ft_memdup.c	\
			ft_freetab.c ft_newtab.c ft_tablen.c							\
			ft_strlen.c	ft_strdup.c	ft_strcpy.c ft_strncpy.c				\
			ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c				\
			ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c				\
			ft_strncmp.c ft_strtrim.c ft_striter.c ft_striteri.c			\
			ft_strmap.c	ft_strmapi.c ft_strequ.c ft_strnequ.c				\
			ft_strsub.c	ft_strnew.c ft_strjoin.c ft_strsplit.c				\
			ft_strdel.c ft_strclr.c	ft_strdup.c	 ft_strtabcpy.c				\
			ft_intmin.c ft_intmax.c	ft_inttabcpy.c							\
			ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c				\
			ft_isdigit.c ft_isalnum.c ft_isalpha.c ft_isspace.c	 ft_ishexa.c\
			ft_getnbr.c														\
			ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c			\
			ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c			\
			ft_atoi.c ft_itoa.c ft_sqrt.c ft_ftoa.c							\
			ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c				\
			ft_lsttoarray.c													\
			ft_lstiter.c ft_lstmap.c ft_lstlen.c ft_lstaddend.c ft_lstfree.c\
			get_next_line.c
OBJ		=	$(SRC:.c=.o)
CMP		=	gcc
FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CMP) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	rm -f main.o

fclean: clean
	rm -f $(NAME)
	rm -f get_next_line

testgnl:
	$(CMP) $(FLAGS) -o get_next_line main.c -L ../libft/ -lft

re: fclean all
