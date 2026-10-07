/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:52:06 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:43:27 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char str)
{
	if (str >= 'a' && str <= 'z' )
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("test 1 :%d\n", ft_isalpha(' '));
// 	printf("test 1 :%d\n", isalpha(' '));
// 	printf("test 2 :%d\n", ft_isalpha('2'));
// 	printf("test 2 :%d\n", isalpha('2'));
// 	printf("test 3 :%d\n", ft_isalpha('T'));
// 	printf("test 3 :%d\n", isalpha('T'));
// 	printf("test 4 :%d\n", ft_isalpha('*'));
// 	printf("test 4 :%d\n", isalpha('*'));
// 	printf("test 5 :%d\n", ft_isalpha('\t'));
// 	printf("test 5 :%d\n", isalpha('\t'));
// 	printf("test 6 :%d\n", ft_isalpha('\n'));
// 	printf("test 6 :%d\n", isalpha('\n'));
// }
