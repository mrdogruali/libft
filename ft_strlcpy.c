/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:37:42 by adogru            #+#    #+#             */
/*   Updated: 2026/10/08 18:48:45 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsiz)
{
	t_size_t	j;

	j = 0;
	if (dstsiz == 0)
	{
		while (src[j] != '\0')
		{
			j++;
		}
		return (j);
	}
	else
	{
		while (j < dstsiz - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char src[] = "123456789";
// 	char dest[] = "abcdefghi";

// 	printf("dest: %s\n",dest);
// 	printf("src: %s\n",src);
// 	printf("%ld\n",ft_strlcpy(dest,src,10));
// 	printf("dest: %s\n",dest);

// 	const char src1[] = "123456789";
// 	char dest1[] = "abcdefghi";

// 	printf("dest1: %s\n",dest1);
// 	printf("src1: %s\n",src1);
// 	printf("%ld\n",strlcpy(dest1,src1,10));
// 	printf("dest1: %s\n",dest1);

// 	const char src2[] = "1234";
// 	char dest2[] = "abcdefghi";

// 	printf("dest2: %s\n",dest2);
// 	printf("src2: %s\n",src2);
// 	printf("%ld\n",ft_strlcpy(dest2,src2,5));
// 	printf("dest2: %s\n",dest2);

// 	const char src3[] = "1234";
// 	char dest3[] = "abcdefghi";

// 	printf("dest3: %s\n",dest3);
// 	printf("src3: %s\n",src3);
// 	printf("%ld\n",strlcpy(dest3,src3,5));
// 	printf("dest3: %s\n",dest3);

// 	const char src4[] = "123456789";
// 	char dest4[] = "abcdef";

// 	printf("dest4: %s\n",dest4);
// 	printf("src4: %s\n",src4);
// 	printf("%ld\n",ft_strlcpy(dest4,src4,10));
// 	printf("dest4: %s\n",dest4);

// 	const char src5[] = "123456789";
// 	char dest5[] = "abcdef";

// 	printf("dest5: %s\n",dest5);
// 	printf("src5: %s\n",src5);
// 	printf("%ld\n",strlcpy(dest5,src5,10));
// 	printf("dest5: %s\n",dest5);

// 	const char src6[] = "123456789";
// 	char dest6[] = "abcdef";

// 	printf("dest6: %s\n",dest6);
// 	printf("src6: %s\n",src6);
// 	printf("%ld\n",ft_strlcpy(dest6,src6,1));
// 	printf("dest6: %s\n",dest6);

// 	const char src7[] = "123456789";
// 	char dest7[] = "abcdef";

// 	printf("dest7: %s\n",dest7);
// 	printf("src7: %s\n",src7);
// 	printf("%ld\n",strlcpy(dest7,src7,1));
// 	printf("dest7: %s\n",dest7);

// 	const char src8[] = "123456789";
// 	char dest8[] = "abcdef";

// 	printf("dest8: %s\n",dest8);
// 	printf("src8: %s\n",src8);
// 	printf("%ld\n",ft_strlcpy(dest8,src8,0));
// 	printf("dest8: %s\n",dest8);

// 	const char src9[] = "123456789";
// 	char dest9[] = "abcdef";

// 	printf("dest9: %s\n",dest9);
// 	printf("src9: %s\n",src9);
// 	printf("%ld\n",strlcpy(dest9,src9,0));
// 	printf("dest9: %s\n",dest9);
// //cc ft_strlcpy.c -lbsd
// 	return (0);
// }