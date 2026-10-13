/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:42:53 by adogru            #+#    #+#             */
/*   Updated: 2026/10/13 21:26:47 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// t_size_t	ft_strlen(const char *s)
// {
// 	t_size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*s_dub;

	i = ft_strlen(s);
	if (i == 0)
	{
		s_dub = (char *) malloc(sizeof(char) * 2);
		s_dub[0] = '\0';
		return (s_dub);
	}
	s_dub = (char *) malloc((2 * i) - 1);
	if (s_dub == NULL)
		return (NULL);
	j = 0;
	while (s[j])
	{
		s_dub[j] = s[j];
		s_dub[j + i] = s[j];
		j++;
	}
	s_dub[j + i] = '\0';
	return (s_dub);
}

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

// 	str = 0;
// 	printf("%s\n",strdup(str));

// 	str = 0;
// 	printf("%s\n",ft_strdup(str));
// }