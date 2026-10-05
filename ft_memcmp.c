/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:15:26 by adogru            #+#    #+#             */
/*   Updated: 2026/10/05 19:36:05 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_cmp(char c1, char c2);

int	ft_memcmp(const void *s1, const void *s2, long unsigned int n)
{
	long unsigned int	index;
	int					buf;
	char				*s1_cast;
	char				*s2_cast;

	buf = 0;
	index = 0;
	s1_cast = (char *) s1;
	s2_cast = (char *) s2;
	while (index < n)
	{
		if (s1_cast[index] == '\0' && s2_cast[index] == '\0')
			return (0);
		buf = char_cmp(s1_cast[index], s2_cast[index]);
		if (buf != 0)
			return (buf);
		index++;
		if (index == n)
			return (0);
	}
	return (0);
}

int	char_cmp(char c1, char c2)
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

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <time.h>
// int main (void) {
// 	char	*array1;
// 	char	*array2;
// 	int result_memcmp;
// 	int result_ft_memcmp;
// 	clock_t begin;
// 	clock_t end;

// 	array1 = "a";
// 	array2 = "";

// 	begin = clock();
// 	result_ft_memcmp = ft_memcmp((void *)array1,(void *) array2,2);
// 	end = clock();
// 	printf("ft_memcmp: %d time: %ld\n",result_ft_memcmp, (end - begin));

// 	begin = clock();
// 	result_memcmp = memcmp((void *)array1,(void *) array2,2);
// 	end = clock();
// 	printf("memcmp: %d time: %ld\n",result_memcmp, (end - begin));

// 	return (0);
// }
