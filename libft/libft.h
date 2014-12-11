/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:27:51 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:13:54 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

typedef struct		s_func
{
	char			fl;
	void			(*fct)(void*, int(*));
}					t_func;

int					ft_isalpha(int ch);
int					ft_isdigit(int ch);
int					ft_isalnum(int ch);
int					ft_isascii(int ch);
int					ft_isprint(int ch);
void				ft_putchar(char c);
void				ft_putchar_spe(void *c, int *cp);
void				ft_putstr(char const *s);
void				ft_putstr_spe(void *s, int *cp);
int					ft_strlen(char const *str);
void				ft_putendl(char const *s);
int					ft_printf(const char *format, ...);
void				ft_putnbr(int n);
void				ft_putnbr_spe(int n, int *cp);
int					ft_toupper(int n);
int					ft_tolower(int n);
void				ft_strclr(char *s);
int					ft_atoi(char *s);
char				*ft_itoa(int n);
int					ft_strcmp(char *s1, char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *s1, char *s2);
char				*ft_strncpy(char *s1, char *s2, size_t n);
char				*ft_strdup(const char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memset(void *v, int n, size_t len);
void				ft_bzero(void *v, size_t len);
void				*ft_memcpy(void *v1, void *v2, size_t n);
void				*ft_memccpy(void *v1, void *v2, int c, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				*ft_memchr(const void *s1, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t size);
char				*ft_strcat(char *s1, char *s2);
char				*ft_strncat(char *s1, char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				**ft_strsplit(char const *s, char c);

#endif
