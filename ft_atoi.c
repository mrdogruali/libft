/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:41:24 by adogru            #+#    #+#             */
/*   Updated: 2026/10/09 15:42:44 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	min_i;
	int	total;

	min_i = 0;
	total = 0;
	while (*nptr != '\0' && ((*nptr >= 7 && *nptr <= 13) || *nptr == 32))
		nptr++;
	if (*nptr != '\0' && (*nptr == '+' || *nptr == '-'))
	{
		if (*nptr == '-')
			min_i++;
		nptr++;
	}
	while (*nptr != '\0' && *nptr >= '0' && *nptr <= '9')
	{
		total = (total * 10) + (*nptr - 48);
		nptr++;
	}
	if (min_i % 2 == 1)
		total = total * -1;
	return (total);
}

// #include <stdio.h>
// int main()
// {
// 	char *nptr = "2";
// 	printf("2: %d\n", ft_atoi(nptr));
// 	printf("2: %d\n", atoi(nptr));

// 	nptr = "-+2";
// 	printf("  -+2: %d\n", ft_atoi(nptr));
// 	printf("  -+2: %d\n", atoi(nptr));
// 	nptr = "  -+2";
// 	printf("  --+2: %d\n", ft_atoi(nptr));
// 	printf("  --+2: %d\n", atoi(nptr));
// 	nptr = "  -+2 ";
// 	printf("  -+2 : %d\n", ft_atoi(nptr));
// 	printf("  -+2 : %d\n", atoi(nptr));
// 	nptr = "  +25354abc";
// 	printf("  +25354abc: %d\n", ft_atoi(nptr));
// 	printf("  +25354abc: %d\n", atoi(nptr));
// 	nptr = "  ----++++2  sdfd";
// 	printf("  ----++++2  sdfd: %d\n", ft_atoi(nptr));
// 	printf("  ----++++2  sdfd: %d\n", atoi(nptr));
// 	nptr = "	skf    ";
// 	printf("	skf     %d\n", ft_atoi(nptr));
// 	printf("	skf     %d\n", atoi(nptr));
// 	nptr = " 0";
// 	printf(" 0 %d\n", ft_atoi(nptr));
// 	printf(" 0 %d\n", atoi(nptr));
// 	nptr = "	-1";
// 	printf("	-1 %d\n", ft_atoi(nptr));
// 	printf("	-1 %d\n", atoi(nptr));
// 	nptr = "1";
// 	printf("1 %d\n", ft_atoi(nptr));
// 	printf("1 %d\n", atoi(nptr));
// 	nptr = "2147483647";
// 	printf("2147483647 %d\n", ft_atoi(nptr));
// 	printf("2147483647 %d\n", atoi(nptr));
// 	nptr = "-2147483648";
// 	printf("-2147483648 %d\n", ft_atoi(nptr));
// 	printf("-2147483648 %d\n", atoi(nptr));
// 	nptr = "2147483648";
// 	printf("2147483648 %d\n", ft_atoi(nptr));
// 	printf("2147483648 %d\n", atoi(nptr));
// 	nptr = "-2147483649";
// 	printf("-2147483649 %d\n", ft_atoi(nptr));
// 	printf("-2147483649 %d\n", atoi(nptr));
// 	nptr = NULL;
// 	printf("-2147483649 %d\n", ft_atoi(nptr));
// 	printf("-2147483649 %d\n", atoi(nptr));
// }
