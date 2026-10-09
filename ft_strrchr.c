/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:20:50 by adogru            #+#    #+#             */
/*   Updated: 2026/10/09 17:39:06 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	flag;
	int	location;

	flag = 0;
	location = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			location = i;
			flag = 1;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *) &s[i]);
	else if (flag == 0)
		return (NULL);
	return ((char *) &s[location]);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s = "test";
// 	printf("%p\n",ft_strrchr(s,'s'));
// 	printf("%p\n",strrchr(s,'s'));

// 	s = "test";
// 	printf("%p\n",ft_strrchr(s,'a'));
// 	printf("%p\n",strrchr(s,'a'));

// 	s = "abbbbbbbb";
// 	printf("%p\n",ft_strrchr(s,'a'));
// 	printf("%p\n",strrchr(s,'a'));

// 	s = "test";
// 	printf("%p\n",ft_strrchr(s,'\0'));
// 	printf("%p\n",strrchr(s,'\0'));

// 	s = "";
// 	printf("%p\n",ft_strrchr(s,'a'));
// 	printf("%p\n",strrchr(s,'a'));

// 	s = "test€";
// 	printf("%p\n",ft_strrchr(s,8364));
// 	printf("%p\n",strrchr(s,8364));

// 	s = NULL;
// 	printf("%p\n",ft_strrchr(s,'s'));
// 	printf("%p\n",strrchr(s,'s'));
// 	return (0);
// }