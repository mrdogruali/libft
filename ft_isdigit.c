/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:31:03 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 18:44:08 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char str)
{
	if (str >= '0' && str <= '9' )
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("test 1 :%d\n", ft_isdigit(' '));
// 	printf("test 1 :%d\n", isdigit(' '));
// 	printf("test 2 :%d\n", ft_isdigit('2'));
// 	printf("test 2 :%d\n", isdigit('2'));
// 	printf("test 3 :%d\n", ft_isdigit('T'));
// 	printf("test 3 :%d\n", isdigit('T'));
// 	printf("test 4 :%d\n", ft_isdigit('*'));
// 	printf("test 4 :%d\n", isdigit('*'));
// 	printf("test 5 :%d\n", ft_isdigit('\t'));
// 	printf("test 5 :%d\n", isdigit('\t'));
// 	printf("test 6 :%d\n", ft_isdigit('\n'));
// 	printf("test 6 :%d\n", isdigit('\n'));
// }
