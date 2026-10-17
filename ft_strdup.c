/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:42:53 by adogru            #+#    #+#             */
/*   Updated: 2026/10/17 12:22:49 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_dub;

	i = ft_strlen(s);
	if (i == 0)
	{
		s_dub = (char *) malloc(sizeof(char));
		if (s_dub == NULL)
			return (NULL);
		s_dub[0] = '\0';
		return (s_dub);
	}
	s_dub = (char *) malloc(sizeof(char) * (i + 1));
	if (s_dub == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_dub[i] = s[i];
		i++;
	}
	s_dub[i] = '\0';
	return (s_dub);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *str = "abc";
// 	printf("%s\n",strdup(str));
// 	str = "abc";
// 	printf("%s\n",ft_strdup(str));

// 	str = "abcd";
// 	printf("%s\n",strdup(str));

// 	str = "abcd";
// 	printf("%s\n",ft_strdup(str));

// 	str = "";
// 	printf("%s\n",strdup(str));

// 	str = "";
// 	printf("%s\n",ft_strdup(str));

// 	str = "lorem ipsum dolor sit amet";
// 	printf("%lu\n",ft_strlen(strdup(str)));

// 	str = "lorem ipsum dolor sit amet";
// 	printf("%lu\n",ft_strlen(ft_strdup(str)));

// 	str = 0;
// 	printf("%s\n",strdup(str));

// 	str = 0;
// 	printf("%s\n",ft_strdup(str));
// }