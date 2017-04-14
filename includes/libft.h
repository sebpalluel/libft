/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:50:29 by psebasti          #+#    #+#             */
/*   Updated: 2017/04/14 13:59:33 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <strings.h>
# include <math.h>
# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../minilibx/mlx.h"
# include "libft_struct.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define BUFF_SIZE 	50
# define FD_MAX		256
# define READ_OK	1
# define READ_EOF	0
# define READ_ERR	-1

int				get_next_line(const int fd, char **line);
void 			ft_swap(void *a, void *b, size_t nbytes);

void			ft_colorcpy(t_color *clr_from, t_color *clr_to);
t_color			*ft_colornew(unsigned char r, unsigned char g, \
				unsigned char b);
t_color			*ft_colorparse(char *arg);
t_color			*ft_hexcolor(int hexValue);
void			ft_hextocolor(t_color *col, int hexValue);
void			ft_imgclean(t_img *img, size_t width, size_t height);
void			ft_imgdel(t_img *img, void *mlx);
t_img			*ft_imgnew(void *mlx, size_t x, size_t y);
t_mlx			*ft_initwindow(char *name, size_t width, size_t height);
void			ft_matrixadd(double **ret, double **m, double **n, int size);
void			ft_matrixhomothety(double **ret, int factor);
void			ft_matrixmult(double **ret, double **m, double **n, int size);
void			ft_matrixonpoint(double **m, t_vec3 *vec3);
void			ft_matrixrotx(double **ret, double deg);
void			ft_matrixroty(double **ret, double deg);
void			ft_matrixrotz(double **ret, double deg);
void			ft_matrixtranslate(double **ret, t_vec3 *vec);
double			**ft_matrixzero(int size);
void			ft_pixcpy(t_pix *pix_from, t_pix *pix_to);
t_pix			*ft_pixnew(int x, int y, int z);
void			ft_pixpopulate(t_pix *to_pix, int x, int y, int z);
t_vec3			*ft_vec3new(double x, double y, double z);
void			ft_vec3populate(t_vec3 *to_vec3, double x, double y, double z);

void			ft_putchar(char c);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr(char const *s);
void			ft_putstr_fd(char const *s, int fd);

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_ishexa(int c);
int				ft_checkdigit(char *str);
int				ft_checkhexa(char *str);

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
char			*ft_ftoa(float f);
int				ft_sqrt(int nb);
int				ft_pow(int n, int p);

size_t			ft_tablen(char **tab);
int				ft_tabdepth(void **tab);
void 			ft_h_flip(void **array, size_t columns, size_t rows, \
				size_t nbytes);
void			ft_v_flip(void **array, size_t columns, size_t rows, \
				size_t nbytes);
int				**ft_tabintcpy(int **array, size_t width);
char			**ft_tabstrcpy(char **str);
void			ft_tabfree(void **tab);
void			**ft_tabnew(size_t height, size_t width);

char			*ft_strcat(char *src, const char *dest);
char			*ft_strchr(const char *src, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *src);
size_t			ft_strlen (const char *s);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *src);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const*s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
unsigned long	ft_stoul(const char *str, int base);
long int		ft_strtol(const char *str, int base);

int				ft_intmin(int *array, size_t size);
int				ft_intmax(int *array, size_t size);
int				*ft_intdup(int *array, size_t width);
int				ft_getnbr(char *str);

void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			ft_bzero(void *s, size_t n);
void			*ft_memdup(const void *mem, size_t size);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstaddend(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_lstlen(t_list *lst);
void			ft_lstfree(t_list **lst);
void			**ft_lsttoarray(t_list *lst);

void			ft_printfloatmatrix(float **mat, size_t size);
void			ft_printintarray(int **map, size_t  width, size_t height);
void			ft_printstrarray(char **array);
#endif
