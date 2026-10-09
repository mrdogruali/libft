/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:28:21 by adogru            #+#    #+#             */
/*   Updated: 2026/10/09 16:02:17 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_size_t	ft_strlcat(char *dest, char *src, t_size_t size)
// {
// 	t_size_t	i;
// 	t_size_t	i_src;

// 	i = size;
// 	i_src = 0;
// 	while (src[i_src] != 0 && (i + i_src + 1) < size)
// 	{
// 		dest[i + i_src] = src[i_src];
// 		i_src++;
// 	}
// 	if (i + i_src + 1 != size)
// 		dest[i + i_src] = '\0';
// 	return (i + i_src);
// }
#include <unistd.h>

t_size_t	ft_strlcat(char *dest, char *src, t_size_t size)
{
	t_size_t	i_src;
	t_size_t	i;

	i_src = 0;
	while (src[i_src] != '\0')
	{
		i_src++;
	}
	i = 0;
	while (src[i] != 0 && (size + i) < (size + i_src))
	{
		write(1, &src[i], 1);
		dest[size + i] = src[i];
		i++;
	}
	return (size + i_src);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char *src = "Hello, ";
//  	char *dst1 = "World!";
//  	char *dst2 = "World!";

// 	printf("%s\n",dst1);
//  	printf("%lu\n", strlcat(dst1, src, 14));
// 	printf("%s\n",dst1);
// 	printf("%s\n",dst2);
//  	printf("%lu\n", ft_strlcat(dst2, src, 20));
// 	printf("%s\n",dst2);

// 	src = "abc";
// 	char	array5[] = "def";
// 	char	array6[] = "def";

// 	printf("%lu\n", ft_strlcat(array5, array6,13));
// 	printf("%s\n",array5);
// 	printf("%s\n",array6);

// 	char	array7[] = "aaaaaaaa";
// 	char	array8[] = "xxxxx";

// 	printf("%lu\n", strlcat(array7, array8,13));
// 	printf("%s\n",array7);
// 	printf("%s\n",array8);

// 	char	*array1 = "aaaaaaaa";
// 	char	*array2 = "xxxxx";

// 	printf("%lu\n", ft_strlcat(array1, array2,9));
// 	printf("%s\n",array1);
// 	printf("%s\n",array2);

// 	char	*array3 = "aaaaaaaa";
// 	char	*array4 = "xxxxx";

// 	printf("%lu\n", strlcat(array3, array4,9));
// 	printf("%s\n",array3);
// 	printf("%s\n",array4);
// 	return (0);
// }
