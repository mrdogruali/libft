/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:05:05 by adogru            #+#    #+#             */
/*   Updated: 2026/10/01 22:20:01 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return ((char *)&s[i]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s = "test";
// 	printf("%p\n",&s[2]);
// 	printf("%p\n",ft_strchr(s,'s'));
// 	return (0);
// }