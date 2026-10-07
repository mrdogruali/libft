/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:58:56 by adogru            #+#    #+#             */
/*   Updated: 2026/10/07 20:06:15 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlen(const char *s)
{
	t_size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include<stdio.h>
// int main (void)
// {
// 	printf ("%lu\n",ft_strlen(""));
// 	printf ("%lu\n",ft_strlen("a"));
// 	printf ("%lu\n",ft_strlen("abc"));
// 	printf ("%lu\n",ft_strlen("	"));
// 	printf ("%lu\n",ft_strlen("23"));
// 	return (0);
// }