/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:38:51 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:17:04 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, const int n)
{
	int		i;
	char	*d_cast;
	char	*s_cast;

	s_cast = (char *)src;
	d_cast = (char *)dest;
	i = 0;
	while (i < n)
	{
		d_cast[i] = s_cast[i];
		i++;
	}
	return ((void *) d_cast);
}

// #include <stdio.h>
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

// #include <string.h>
// int main ()
// {

// 	char src[] = "123456789";
// 	char dest[] = "abcd";

// 	printf("dest: %s\n",dest);
// 	printf("src: %s\n",src);
// 	memcpy(dest,src,3);
// 	printf("dest: %s\n",dest);

// 	return (0);
// }