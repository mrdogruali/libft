/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:40:19 by adogru            #+#    #+#             */
/*   Updated: 2026/10/11 15:28:18 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, t_size_t len)
{
	unsigned int	i;
	unsigned int	i_fnd;
	unsigned int	i_cmp;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		i_cmp = i;
		i_fnd = 0;
		while (big[i_cmp] == little[i_fnd] && big[i_cmp] != '\0' && i_cmp < len)
		{
			if (little[i_fnd] == '\0')
				break ;
			i_fnd++;
			i_cmp++;
			if (little[i_fnd] == '\0' )
			{
				return ((char *) &big[i]);
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main ()
// {
// 	printf("%s\n",ft_strnstr("aB","B",2));
// 	printf("%s\n",strnstr("aB","B",2));
// 	printf("%s\n",ft_strnstr("","B",2));
// 	printf("%s\n",strnstr("","B",2));
// 	printf("%s\n",ft_strnstr("aaaB","B",0));
// 	printf("%s\n",strnstr("aaaB","B",0));
// 	printf("%s\n",ft_strnstr("aaaaaBaac","Baa",4));
// 	printf("%s\n",strnstr("aaaaaBaac","Baa",4));
// 	printf("%s\n",ft_strnstr("aBaac","Baa",4));
// 	printf("%s\n",strnstr("aBaac","Baa",4));
// 	printf("%s\n",ft_strnstr("aBsdvf2454","45",10));
// 	printf("%s\n",strnstr("aBsdvf2454","45",10));
// 	printf("%s\n",ft_strnstr("B","",2));
// 	printf("%s\n",strnstr("B","",2));

// 	return (0);
// }
