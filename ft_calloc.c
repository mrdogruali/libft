/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:24:05 by adogru            #+#    #+#             */
/*   Updated: 2026/10/13 21:59:36 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <unistd.h>
// #include <stdio.h>

// void	ft_bzero(void *s, t_size_t n)
// {
// 	unsigned int	i;
// 	char			*s_cast;

// 	s_cast = s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		s_cast[i] = '\0';
// 		i++;
// 	}
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	if (nmemb == 0 || size == 0)
	{
		array = malloc(1);
		ft_bzero(array, 1);
		return ((void *)array);
	}
	else if ((nmemb * size) > __INT_MAX__)
		return ((void *) '\0');
	array = malloc(nmemb * size);
	ft_bzero(array, nmemb * size);
	return ((void *)array);
}

// int main()
// {
// 	char *str;
// 	char *str1;

// 	str = (char *) calloc(30, 1);
//     if (!str)
//         write(1, "NULL", 4);
//     else
//     {    
// 		write(1, str, 30);
// 	}
// 	str1 = (char *) ft_calloc(30, 1);
//     if (!str1)
//         write(1, "NULL", 4);
//     else
// 	{
//         write(1, str1, 30);
// 	}
// 	printf("%s\n",str);
// 	printf("%s\n",str1);

// }