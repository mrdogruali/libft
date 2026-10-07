/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:54:55 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:29:58 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	unsigned long	i;
	char			*cast_s;

	cast_s = (char *) s;
	i = 0;
	while (cast_s[i] != c && cast_s[i] != '\0' && n > i)
		i++;
	if (cast_s[i] == '\0' || cast_s[i] == c)
		return ((void *)&cast_s[i]);
	cast_s = 0;
	return ((void *)cast_s);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	*s = "test";
// 	printf("%p\n",&s[0]);
// 	printf("%p\n",ft_memchr(s,'a',2));
// 	printf("%p\n",memchr(s,'a',2));
// 	return (0);
// }