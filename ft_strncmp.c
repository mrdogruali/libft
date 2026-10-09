/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:54:00 by adogru            #+#    #+#             */
/*   Updated: 2026/10/09 18:14:00 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(char *s1, char *s2, t_size_t n);
static int	if_eos(char *s, unsigned int index);
static int	char_cmp(unsigned char c1, unsigned char c2);

int	ft_strncmp(char *s1, char *s2, t_size_t n)
{
	unsigned int	index;
	int				buf;

	buf = 0;
	index = 0;
	while (index < n)
	{
		if (if_eos(s1, index) && if_eos(s2, index))
		{
			return (0);
		}
		buf = char_cmp(s1[index], s2[index]);
		if (buf != 0)
		{
			return (buf);
		}
		index++;
		if (index == n)
		{
			return (0);
		}
	}
	return (0);
}

static int	char_cmp(unsigned char c1, unsigned char c2)
{
	if (c1 == '\0' || c2 > c1)
	{
		return (-1);
	}
	else if (c2 == '\0' || c1 > c2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

static int	if_eos(char *s, unsigned int index)
{
	return (s[index] == '\0');
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main (void) {
// 	char	*array1;
// 	char	*array2;
// 	array1 = "abcde";
// 	array2 = "abcf";
// 	printf("%d\n", strncmp(array1,array2, 4));
// 	printf("%d\n", ft_strncmp(array1,array2, 4));
// }