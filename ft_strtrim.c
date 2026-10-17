/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:57:59 by adogru            #+#    #+#             */
/*   Updated: 2026/10/17 17:08:44 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trim(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size_t	i;
	t_size_t	s1_l;
	char		*trimmed;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(set) == 0)
		return ((char *) s1);
	s1_l = ft_strlen(s1);
	while (is_trim(set, s1[i]) && i < s1_l)
		i++;
	while (is_trim(set, s1[s1_l - 1]) && 0 < s1_l)
		s1_l--;
	trimmed = ft_substr(&s1[i], 0, s1_l - i);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

// #include <stdio.h>

// int main()
// {
// 	char *str = "ab123ab";
// 	char *set = "ab";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));

// 	str = "ababba123abab";
// 	set = "ab";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));

// 	str = "ab123ab";
// 	set = "a";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));

// 	str = "ab123ab";
// 	set = "b";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));

// 	str = "ab123ab";
// 	set = "";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));

// 	str = "";
// 	set = "";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strtrim(str,set));
// }