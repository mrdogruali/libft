/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:11:12 by adogru            #+#    #+#             */
/*   Updated: 2026/10/13 22:40:51 by adogru           ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	t_size_t	i;
	t_size_t	size_s1;
	t_size_t	size_s2;

	i = 0;
	size_s1 = ft_strlen((const char *) s1);
	size_s2 = ft_strlen((const char *) s2);
	new_str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < size_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size_s2)
	{
		new_str[i + size_s1] = s2[i];
		i++;
	}
	new_str[size_s1 + size_s2] = '\0';
	return (new_str);
}

// int main()
// {
// 	char *a = "abc";
// 	char *b = "def";
// 	char *c = "abcdef";

// 	printf("%s\n",ft_strjoin(a,b));
// 	printf("%d\n",strncmp(c,"abcdef",9));

// 	a = "";
// 	b = "def";
// 	c = "def";

// 	printf("%s\n",ft_strjoin(a,b));
// 	printf("%d\n",strncmp(c,"def",9));
// 	a = "abc";
// 	b = "";
// 	c = "abc";

// 	printf("%s\n",ft_strjoin(a,b));
// 	printf("%d\n",strncmp(c,"abc",9));
// }