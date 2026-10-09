/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:54:12 by adogru            #+#    #+#             */
/*   Updated: 2026/10/08 14:57:44 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	unsigned int	i;
	char			*dest_cast;
	char			*s_cast;
	char			*temp;

	dest_cast = (char *)dest;
	s_cast = (char *) src;
	i = 0;
	temp = malloc(n);
	while (i < n)
	{
		temp[i] = s_cast[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_cast[i] = temp[i];
		i++;
	}
	return ((void *) dest_cast);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void intarrayprint(int *array)
// {
// 	int i = 0;
// 	while (array[i] != '\0')
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// }
// int main ()
// {
// 	const char src[] = "123456789";
// 	char dest[] = "abcdefghi";

// 	printf("dest: %s\n",dest);
// 	printf("src: %s\n",src);
// 	ft_memmove(dest,src,5);
// 	printf("dest: %s\n",dest);

// 	const char src1[] = "123456789";
// 	char dest1[] = "abcdefghi";

// 	printf("dest1: %s\n",dest1);
// 	printf("src1: %s\n",src1);
// 	ft_memmove(dest1,src1,5);
// 	printf("dest1: %s\n",dest1);

// 	const char src2[] = "123456789";
// 	char dest2[] = "abc";

// 	printf("dest2: %s\n",dest2);
// 	printf("src2: %s\n",src2);
// 	ft_memmove(dest2,src2,5);
// 	printf("dest2: %s\n",dest2);

// 	const char src3[] = "123";
// 	char dest3[] = "abcde";

// 	printf("dest3: %s\n",dest3);
// 	printf("src3: %s\n",src3);
// 	ft_memmove(dest3,src3,5);
// 	printf("dest3: %s\n",dest3);

// 	const char src4[] = "lorem ipsum dolor sit amet";
// 	char dest4[] = "abcde";

// 	printf("dest4: %s\n",dest4);
// 	printf("src4: %s\n",src4);
// 	ft_memmove(NULL,NULL,1);
// 	memmove(NULL,NULL,1);
// 	printf("dest4: %s\n",dest4);

// 	return (0);
// }