/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:41:24 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 12:52:52 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	atoi(const char *nptr)
{
	int	i;
	int	min_i;
	int	total;

	i = 0;
	min_i = 0;
	total = 0;
	while (nptr[i] != '\0' && ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == ' '))
		i++;
	while (nptr[i] != '\0' && (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			min_i++;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		total = (total * 10) + (nptr[i] - 48);
		i++;
	}
	if (min_i % 2 == 1)
		total = total * -1;
	return (total);
}

// #include <stdio.h>
// int main()
// {
// 	char *nptr = "2";
// 	printf("2: %d\n", atoi(nptr));

// 	nptr = "-+2";
// 	printf("  -+2: %d\n", atoi(nptr));

// 	nptr = "  -+2";
// 	printf("  -+2: %d\n", atoi(nptr));

// 	nptr = "  -+2 ";
// 	printf("  -+2 : %d\n", atoi(nptr));

// 	nptr = "  -+25354";
// 	printf("  -+25354: %d\n", atoi(nptr));

// 	nptr = "  ----++++2  sdfd";
// 	printf("  ----++++2  sdfd: %d\n", atoi(nptr));

// 	nptr = "	skf    ";
// 	printf("	skf     %d\n", atoi(nptr));
// }