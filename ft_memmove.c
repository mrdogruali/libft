/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:54:12 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:17:07 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	unsigned int	i;
	char			*dest_cast;
	char			*s_cast;

	dest_cast = (char *)dest;
	s_cast = (char *) src;
	i = 0;
	while (i < n)
	{
		dest_cast[i] = s_cast[i];
		i++;
	}
	return ((void *) dest);
}

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

// #include <stdio.h>
// #include <string.h>
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
// 	memmove(dest1,src1,5);
// 	printf("dest1: %s\n",dest1);

// 	return (0);
// }