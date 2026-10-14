/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:26:21 by adogru            #+#    #+#             */
/*   Updated: 2026/10/14 21:11:16 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	c;
	char	*return_string;

	if (n == 0)
	{
		return_string = malloc(sizeof(char) * 2);
		return_string = "0";
		return (return_string);
	}
	else if (n < 0)
	{
		return_string = ft_itoa(n * -1);
		c = '-';
	}
	else if (n >= 10)
	{
		return_string = ft_itoa(n / 10);
		n = n % 10;
		c = n + 48;
	}
	if (return_string == NULL)
		return_string = &c;
	else
		return_string = ft_strjoin(return_string, &c);
	return (return_string);
}
