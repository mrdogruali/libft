/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:05:20 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:16:12 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, t_size_t n)
{
	unsigned int	i;
	char			*s_cast;

	s_cast = s;
	i = 0;
	while (i < n)
	{
		s_cast[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void intarrayprint(int *array)
// {
// 	int i = 0;
// 	while (array[i] != '\0')
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// }
//
// int main ()
// {
// 	// int i = 0;
// 	char *strarray1 = malloc(100);
// 	printf("empty char strarray1: %s\n",strarray1);
// 	ft_memset(strarray1,65,10);
// 	printf("filled char strarray1: %s\n",strarray1);
// 	ft_bzero(strarray1,5);
// 	printf("zeroised char strarray1: %s\n",strarray1);
//
// 	char *strarray2 = malloc(100);
// 	printf("empty char strarray2: %s\n",strarray2);
// 	memset(strarray2,65,10);
// 	printf("filled char strarray2: %s\n",strarray2);
// 	bzero(strarray2,5);
// 	printf("zeroised char strarray2: %s\n",strarray2);
//
// 	int *intarray1 = malloc(100);
//
// 	printf("empty int intarray1:");
// 	intarrayprint(intarray1);
// 	printf("\n");
// 	ft_memset(intarray1,65,10);
// 	printf("filled int intarray1:");
// 	intarrayprint(intarray1);
// 	printf("\n");
// 	ft_bzero(intarray1,5);
// 	printf("zeroised int intarray1:");
// 	intarrayprint(intarray1);
// 	printf("\n");
//
// 	int *intarray2 = malloc(100);
//
//
// 	printf("empty int intarray2:");
// 	intarrayprint(intarray2);
// 	printf("\n");
// 	memset(intarray2,65,10);
// 	printf("filled int intarray2:");
// 	intarrayprint(intarray2);
// 	printf("\n");
// 	bzero(intarray2,5);
// 	printf("zeroised int intarray2:");
// 	intarrayprint(intarray2);
// 	printf("\n");
//
// 	return (0);
// }