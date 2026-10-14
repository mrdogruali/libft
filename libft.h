/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:38:03 by adogru            #+#    #+#             */
/*   Updated: 2026/10/14 20:13:22 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef unsigned long int		t_size_t;
int			ft_atoi(const char *nptr);
void		ft_bzero(void *s, t_size_t n);
int			ft_isalnum(char str);
int			ft_isalpha(char str);
int			ft_isascii(int c);
int			ft_isdigit(char str);
int			ft_isprint(char str);
void		*ft_memchr(const void *s, int c, t_size_t n);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
void		*ft_memmove(void *dest, const void *src, t_size_t n);
void		*ft_memset(void *s, int c, t_size_t n);
char		*ft_strchr(const char *s, int c);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, const int n);
void		*ft_memmove(void *dest, const void *src, t_size_t n);
void		*ft_memset(void *s, int c, t_size_t n);
t_size_t	ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsiz);
t_size_t	ft_strlcat(char *dest, char *src, t_size_t size);
int			ft_strncmp(char *s1, char *s2, t_size_t n);
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);

char		*ft_substr(char const *s, unsigned int start, t_size_t len);

#endif