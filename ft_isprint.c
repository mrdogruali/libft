/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:05:53 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 19:36:40 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("test 1 :%d\n", ft_isprint(' '));
// 	printf("test 1 :%d\n", isprint(' '));
// 	printf("test 2 :%d\n", ft_isprint('2'));
// 	printf("test 2 :%d\n", isprint('2'));
// 	printf("test 3 :%d\n", ft_isprint('T'));
// 	printf("test 3 :%d\n", isprint('T'));
// 	printf("test 4 :%d\n", ft_isprint('*'));
// 	printf("test 4 :%d\n", isprint('*'));
// 	printf("test 5 :%d\n", ft_isprint('\t'));
// 	printf("test 5 :%d\n", isprint('\t'));
// 	printf("test 6 :%d\n", ft_isprint('\r'));
// 	printf("test 6 :%d\n", isprint('\r'));
// }