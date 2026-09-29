/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:38:12 by adogru            #+#    #+#             */
/*   Updated: 2026/09/28 19:50:33 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char str)
{
	if (str >= '\0' && str <= 127)
		return (1);
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char c = '\n';
// 	printf("test 1 :%d\n", ft_isascii(' '));
// 	printf("test 1 :%d\n", isascii(' '));
// 	printf("test 2 :%d\n", ft_isascii('2'));
// 	printf("test 2 :%d\n", isascii('2'));
// 	printf("test 3 :%d\n", ft_isascii('T'));
// 	printf("test 3 :%d\n", isascii('T'));
// 	printf("test 4 :%d\n", ft_isascii('*'));
// 	printf("test 4 :%d\n", isascii('*'));
// 	printf("test 5 :%d\n", ft_isascii('\t'));
// 	printf("test 5 :%d\n", isascii('\t'));
// 	printf("test 6 :%d\n", ft_isascii('\n'));
// 	printf("test 6 :%d\n", isascii('\n'));
// 	printf("test 6 :%d\n", ft_isascii(c + 128));
// 	printf("test 6 :%d\n", isascii(c + 128));
// }
