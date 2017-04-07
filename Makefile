#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/10 23:29:24 by psebasti          #+#    #+#             *#
#*   Updated: 2017/04/07 18:10:35 by psebasti         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	=	libft.a

SRCDIR = ./srcs/
OBJDIR = ./objs/
INCDIR = ./includes

STRPATH = str/
STDLIBPATH = stdlib/
CTYPEPATH = ctype/
LISTPATH = list/
PUTPATH = put/
MEMPATH = mem/
MATHPATH = math/
PERSOPATH = perso/
INTPATH = int/
TABPATH = tab/

SRC		=	$(MEMPATH)ft_memset.c\
			$(MEMPATH)ft_bzero.c\
			$(MEMPATH)ft_memcpy.c\
			$(MEMPATH)ft_memccpy.c\
			$(MEMPATH)ft_memmove.c\
			$(MEMPATH)ft_memchr.c\
			$(MEMPATH)ft_memcmp.c\
			$(MEMPATH)ft_memalloc.c\
			$(MEMPATH)ft_memdel.c\
			$(MEMPATH)ft_memdup.c\
			$(TABPATH)ft_freetab.c\
			$(TABPATH)ft_newtab.c\
			$(TABPATH)ft_tablen.c\
			$(TABPATH)ft_strtabcpy.c\
			$(TABPATH)ft_inttabcpy.c\
			$(STRPATH)ft_strlen.c\
			$(STRPATH)ft_strdup.c\
			$(STRPATH)ft_strcpy.c\
			$(STRPATH)ft_strncpy.c\
			$(STRPATH)ft_strcat.c\
			$(STRPATH)ft_strncat.c\
			$(STRPATH)ft_strlcat.c\
			$(STRPATH)ft_strchr.c\
			$(STRPATH)ft_strrchr.c\
			$(STRPATH)ft_strstr.c\
			$(STRPATH)ft_strnstr.c\
			$(STRPATH)ft_strcmp.c\
			$(STRPATH)ft_strncmp.c\
			$(STRPATH)ft_strtrim.c\
			$(STRPATH)ft_striter.c\
			$(STRPATH)ft_striteri.c\
			$(STRPATH)ft_strmap.c\
			$(STRPATH)ft_strmapi.c\
			$(STRPATH)ft_strequ.c\
			$(STRPATH)ft_strnequ.c\
			$(STRPATH)ft_strsub.c\
			$(STRPATH)ft_strnew.c\
			$(STRPATH)ft_strjoin.c\
			$(STRPATH)ft_strsplit.c\
			$(STRPATH)ft_strdel.c\
			$(STRPATH)ft_strclr.c\
			$(STRPATH)ft_strdup.c\
			$(STRPATH)ft_tolower.c\
			$(STRPATH)ft_toupper.c\
			$(INTPATH)ft_intmin.c\
			$(INTPATH)ft_intmax.c\
			$(INTPATH)ft_getnbr.c\
			$(CTYPEPATH)ft_isprint.c\
			$(CTYPEPATH)ft_isascii.c\
			$(CTYPEPATH)ft_isdigit.c\
			$(CTYPEPATH)ft_isalnum.c\
			$(CTYPEPATH)ft_isalpha.c\
			$(CTYPEPATH)ft_isspace.c\
			$(CTYPEPATH)ft_ishexa.c\
			$(PUTPATH)ft_putchar.c\
			$(PUTPATH)ft_putchar_fd.c\
			$(PUTPATH)ft_putstr.c\
			$(PUTPATH)ft_putstr_fd.c\
			$(PUTPATH)ft_putendl.c\
			$(PUTPATH)ft_putendl_fd.c\
			$(PUTPATH)ft_putnbr.c\
			$(PUTPATH)ft_putnbr_fd.c\
			$(STDLIBPATH)ft_atoi.c\
			$(STDLIBPATH)ft_itoa.c\
			$(STDLIBPATH)ft_ftoa.c\
			$(STDLIBPATH)ft_strtol.c\
			$(STDLIBPATH)ft_stoul.c\
			$(MATHPATH)ft_sqrt.c\
			$(MATHPATH)ft_pow.c\
			$(LISTPATH)ft_lstnew.c\
			$(LISTPATH)ft_lstdelone.c\
			$(LISTPATH)ft_lstdel.c\
			$(LISTPATH)ft_lstadd.c	\
			$(LISTPATH)ft_lsttoarray.c\
			$(LISTPATH)ft_lstiter.c\
			$(LISTPATH)ft_lstmap.c\
			$(LISTPATH)ft_lstlen.c\
			$(LISTPATH)ft_lstaddend.c\
			$(LISTPATH)ft_lstfree.c\
			$(PERSOPATH)get_next_line.c

OBJS 	=	$(SRCS:.c=.o)

.PHONY: all build clean fclean re

CMP		=	gcc
FLAGS	=	-ggdb -Wall -Wextra -Werror

SRC := $(filter $(addprefix %, .c), $(SRC))
SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJS = $(addprefix $(OBJDIR), $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I, $(INCS_DIRS))

all: $(NAME)

$(NAME): build $(LIBS) $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

build:
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJS_DIRS)

clean:
	@rm -f $(LIBS)
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

$(OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) -c -o $@ $< $(INCS) $(CFLAGS)
