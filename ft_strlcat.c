/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:28:21 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:40:32 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dest, char *src, t_size_t size)
{
	unsigned int	i;
	unsigned int	i_src;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i_src = 0;
	while (src[i_src] != 0 && (i + i_src + 1) < size)
	{
		dest[i + i_src] = src[i_src];
		i_src++;
	}
	if (i + i_src + 1 != size)
		dest[i + i_src] = '\0';
	return (i + i_src);
}
// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int index = 0;
// 	char	array1[7];
// 	char	*array2;

// 	while(index < 2)
// 	{
// 		array1[index] = 'a';
// 		index++;
// 	}
// 	array2 = "xxxxx";
// 	printf("%u\n", ft_strlcat(array1, array2,8));
// 	printf("%s",array1);
// 	return (0);
// }
