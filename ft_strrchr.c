/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:20:50 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:17:45 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = i;
		i++;
	}
	if (flag == 0)
		return ((char *)&s[i]);
	return ((char *)&s[flag]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s = "tesst";
// 	printf("%p\n",&s[0]);
// 	printf("%p\n",ft_strrchr(s,'s'));
// 	printf("%p\n",ft_strrchr(s,'a'));
// 	return (0);
// }