/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:54:55 by adogru            #+#    #+#             */
/*   Updated: 2026/10/11 14:43:53 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	unsigned long	i;
	unsigned char	*cast_s;

	cast_s = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		if (cast_s[i] == (unsigned char) c)
			return ((void *) &cast_s[i]);
		if (cast_s[i] == '\0')
			return ((void *) 0);
		i++;
	}
	cast_s = 0;
	return ((void *)cast_s);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	*s1 = "/|\x12\xff\x09\x42\042\42|\\";
// 	printf("%p\n",&s1[0]);
// 	printf("%p\n",ft_memchr(s1,'\xde',10));
// 	printf("%p\n",memchr(s1,'\xde',10));

// 	const char *s2 = "test";
// 	printf("%p\n",&s2[0]);
// 	printf("%p\n",ft_memchr(s2,'a',2));
// 	printf("%p\n",memchr(s2,'a',2));

// 	const char *s3 = "test";
// 	printf("%p\n",&s3[0]);
// 	printf("%p\n",ft_memchr(s3,'\0',5));
// 	printf("%p\n",memchr(s3,'\0',5));

// 	const char *s4 = "test";
// 	printf("%p\n",&s4[0]);
// 	printf("%p\n",ft_memchr(s4,'\0',4));
// 	printf("%p\n",memchr(s4,'\0',4));

// 	const char *s5 = "test";
// 	printf("%p\n",&s5[0]);
// 	printf("%p\n",ft_memchr(s5,'s',5));
// 	printf("%p\n",memchr(s5,'s',5));

// 	const char *s6 = "\200";
// 	printf("%p\n",&s6[0]);
// 	printf("%p\n",ft_memchr(s6,'\200',10));
// 	printf("%p\n",memchr(s6,'\200',10));
// 	return (0);
// }