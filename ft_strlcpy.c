/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:37:42 by adogru            #+#    #+#             */
/*   Updated: 2026/10/01 22:16:10 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, unsigned long dstsiz)
{
	unsigned long	j;

	j = 0;
	while (j < dstsiz - 1 && src[j] != '\n')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
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
// 	ft_strlcpy(dest,src,10);
// 	printf("dest: %s\n",dest);

// 	const char src1[] = "123456789";
// 	char dest1[] = "abcdefghi";

// 	printf("dest1: %s\n",dest1);
// 	printf("src1: %s\n",src1);
// 	strlcpy(dest1,src1,10);
// 	printf("dest1: %s\n",dest1);

// 	const char src2[] = "1234";
// 	char dest2[] = "abcdefghi";

// 	printf("dest2: %s\n",dest2);
// 	printf("src2: %s\n",src2);
// 	ft_strlcpy(dest2,src2,10);
// 	printf("dest2: %s\n",dest2);

// 	const char src3[] = "1234";
// 	char dest3[] = "abcdefghi";

// 	printf("dest3: %s\n",dest3);
// 	printf("src3: %s\n",src3);
// 	strlcpy(dest3,src3,10);
// 	printf("dest3: %s\n",dest3);

// 	const char src4[] = "123456789";
// 	char dest4[] = "abcd";

// 	printf("dest4: %s\n",dest4);
// 	printf("src4: %s\n",src4);
// 	ft_strlcpy(dest4,src4,10);
// 	printf("dest4: %s\n",dest4);

// 	const char src5[] = "123456789";
// 	char dest5[] = "abcd";

// 	printf("dest5: %s\n",dest5);
// 	printf("src5: %s\n",src5);
// 	strlcpy(dest5,src5,10);
// 	printf("dest5: %s\n",dest5);

// //cc ft_strlcpy.c -lbsd
// 	return (0);
// }