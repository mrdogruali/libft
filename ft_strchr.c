/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:05:05 by adogru            #+#    #+#             */
/*   Updated: 2026/10/17 17:32:33 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char) c == (unsigned char) *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s = "test";
// 	printf("%p\n",ft_strchr(s,'s'));
// 	printf("%p\n",strchr(s,'s'));

// 	s = "test";
// 	printf("%p\n",ft_strchr(s,'a'));
// 	printf("%p\n",strchr(s,'a'));

// 	s = "test";
// 	printf("%p\n",ft_strchr(s,'\0'));
// 	printf("%p\n",strchr(s,'\0'));

// 	s = "";
// 	printf("%p\n",ft_strchr(s,'a'));
// 	printf("%p\n",strchr(s,'a'));

// 	s = "test€";
// 	printf("%p\n",ft_strchr(s,8364));
// 	printf("%p\n",strchr(s,8364));

// 	s = NULL;
// 	printf("%p\n",ft_strchr(s,'s'));
// 	printf("%p\n",strchr(s,'s'));
// 	return (0);
// }