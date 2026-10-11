/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:15:26 by adogru            #+#    #+#             */
/*   Updated: 2026/10/11 15:12:04 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_cmp(unsigned char c1, unsigned char c2);

int	ft_memcmp(const void *s1, const void *s2, t_size_t n)
{
	long unsigned int	index;
	int					buf;
	unsigned char		*s1_cast;
	unsigned char		*s2_cast;

	buf = 0;
	index = 0;
	s1_cast = (unsigned char *) s1;
	s2_cast = (unsigned char *) s2;
	while (index < n)
	{
		buf = char_cmp(s1_cast[index], s2_cast[index]);
		if (buf != 0)
			return (buf);
		index++;
		if (index == n)
			return (0);
	}
	return (0);
}

static int	char_cmp(unsigned char c1, unsigned char c2)
{
	if (c2 > c1)
	{
		return (c1 - c2);
	}
	else if (c1 > c2)
	{
		return (c1 - c2);
	}
	else
	{
		return (0);
	}
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main (void) {
// 	char	*array1;
// 	char	*array2;

// 	array1 = "a";
// 	array2 = "";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,2));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,2));
// 	array1 = "";
// 	array2 = "a";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,2));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,2));
// 	array1 = "a";
// 	array2 = "b";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,2));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,2));
// 	array1 = "b";
// 	array2 = "a";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,2));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,2));
// 	array1 = "ab";
// 	array2 = "ac";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,2));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,2));
// 	array1 = "ab";
// 	array2 = "ac";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,0));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,0));
// 	array1 = "ab\0\200";
// 	array2 = "ab\0\201";
// 	printf("%d\n",ft_memcmp((void *)array1,(void *) array2,4));
// 	printf("%d\n",memcmp((void *)array1,(void *) array2,4));

// 	return (0);
// }
