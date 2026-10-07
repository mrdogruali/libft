/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:34:39 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:16:18 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char str)
{
	if (str >= 'a' && str <= 'z' )
	{
	}
	else if (str >= 'A' && str <= 'Z')
	{
	}
	else if (str >= '0' && str <= '9')
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("test 1 :%d\n", ft_isalnum(' '));
// 	printf("test 1 :%d\n", isalnum(' '));
// 	printf("test 2 :%d\n", ft_isalnum('2'));
// 	printf("test 2 :%d\n", isalnum('2'));
// 	printf("test 3 :%d\n", ft_isalnum('T'));
// 	printf("test 3 :%d\n", isalnum('T'));
// 	printf("test 4 :%d\n", ft_isalnum('*'));
// 	printf("test 4 :%d\n", isalnum('*'));
// 	printf("test 5 :%d\n", ft_isalnum('\t'));
// 	printf("test 5 :%d\n", isalnum('\t'));
// 	printf("test 6 :%d\n", ft_isalnum('\n'));
// 	printf("test 6 :%d\n", isalnum('\n'));
// }
