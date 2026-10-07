/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:38:03 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 14:51:32 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long int	t_size_t;
int	atoi(const char *nptr);
void	ft_bzero(void *s, t_size_t n);
int	ft_isalnum(char str);
int	ft_isalpha(char str);
int	ft_isascii(char str);
int	ft_isdigit(char str);
int	ft_isprint(char str);
void	*ft_memchr(const void *s, int c, unsigned long int n);
int	ft_memcmp(const void *s1, const void *s2, long unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
char	*ft_strchr(const char *s, int c);
int	ft_memcmp(const void *s1, const void *s2, long unsigned int n);
void	*ft_memcpy(void *dest, const void *src, const int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
char	*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlcpy(char *dst, const char *src, unsigned long dstsiz);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, long unsigned int len);
char	*ft_strrchr(const char *s, int c);
int	tolower(int c);
int	ft_toupper(int c);

#endif