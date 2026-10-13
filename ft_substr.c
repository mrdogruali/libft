/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:32:59 by adogru            #+#    #+#             */
/*   Updated: 2026/10/13 22:10:34 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

// int main()
// {
// 	char *test;

// 	test = "abcdef";
// 	printf("%s\n",ft_substr(test, 2, 3));

// 	test = "";
// 	printf("%s\n",ft_substr(test, 2, 3));

// 	char *str = "01234";
//     size_t size = 5;
//     printf("%s\n",ft_substr(str, 5, size));

// 	test = NULL;
// 	printf("%s\n",ft_substr(test, 2, 3));

// }