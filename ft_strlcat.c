/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:28:21 by adogru            #+#    #+#             */
/*   Updated: 2026/10/14 15:02:46 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dest, char *src, t_size_t size)
{
	t_size_t	i_src;
	t_size_t	i;
	t_size_t	ret_val;

	ret_val = ft_strlen(dest) + ft_strlen(src);
	i_src = 0;
	i = 0;
	while (dest[i_src])
		i_src++;
	if (size < i_src)
		return (size + ft_strlen((const char *)src));
	else if (i_src == 0)
	{
		ft_strlcpy(dest, (const char *) src, size);
		return (ft_strlen(src));
	}
	i = ft_strlcpy(&dest[i_src + i], src, size - 1);
	if (i_src + i == size - 1)
		return (i_src + i + 1);
	return (ret_val);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char *src = "World!";
//  	char dst1[20] = "Hello, ";
//  	char dst2[20] = "Hello, ";

// 	printf("dest1: %s\n",dst1);
//  	printf("size: %lu\n", strlcat(dst1, src, 20));
// 	printf("dest1: %s\n",dst1);

// 	printf("dest2: %s\n",dst2);
//  	printf("size: %lu\n", ft_strlcat(dst2, src, 20));
// 	printf("dest2: %s\n",dst2);

// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
//  	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	printf("max: %lu\n", max);
// 	printf("buff1: %s\n",buff1);
//  	printf("%lu\n",strlcat(buff1, str, max));
// 	printf("buff1: %s\n",buff1);
// 	printf("max: %lu\n", max);
// 	printf("buff2: %s\n",buff2);
//  	printf("%lu\n",ft_strlcat(buff2, str, max));
// 	printf("buff2: %s\n",buff2);

// 	str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff3[0xF00] = "there is no stars in the sky";
//  	char buff4[0xF00] = "there is no stars in the sky";
// 	max =  strlen(str) + strlen(buff3);
// 	printf("max: %lu\n", max);
// 	printf("buff3: %s\n",buff3);
//  	printf("%lu\n",strlcat(buff3, str, max));
// 	printf("buff3: %s\n",buff3);
// 	printf("max: %lu\n", max);
// 	printf("buff4: %s\n",buff4);
//  	printf("%lu\n",ft_strlcat(buff4, str, max));
// 	printf("buff4: %s\n",buff4);

// 	char s1[4] = "";
//  	char s2[4] = "";
// 	printf("s1: %s\n",s1);
//  	printf("%lu\n",strlcat(s1, "thx to ntoniolo for this test !", 4));
// 	printf("s1: %s\n",s1);
// 	printf("s2: %s\n",s2);
//  	printf("%lu\n",ft_strlcat(s2, "thx to ntoniolo for this test !", 4));
// 	printf("s2: %s\n",s2);

// 	src = "";
// 	char	array7[11] = "aaaaaaaa";
// 	char	array8[11] = "aaaaaaaa";

// 	printf("%s\n",array7);
// 	printf("%lu\n", strlcat(array7, src,11));
// 	printf("%s\n",array7);

// 	printf("%s\n",array8);
// 	printf("%lu\n", ft_strlcat(array8, src,11));
// 	printf("%s\n",array8);

// 	src = "aaa";
// 	char	array3[5] = "";
// 	char	array4[5] = "";

// 	printf("%s\n",array3);
// 	printf("%lu\n", strlcat(array3, src,5));
// 	printf("%s\n",array3);

// 	printf("%s\n",array4);
// 	printf("%lu\n", ft_strlcat(array4, src,5));
// 	printf("%s\n",array4);

// 	str = "the cake is a lie !\0I'm hidden lol\r\n";
//  	char buff5[0xF00] = "";
//  	char buff6[0xF00] = "";
//  	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;

//  	strlcat(buff5, str, max);
//  	ft_strlcat(buff6, str, max);

// 	printf("diff: %d\n",strcmp(buff5,buff6));

// 	str = "n\0AA";
//  	char buff7[0xF00] = "\0AAAAAAAAAAAAAAAA";
//  	char buff8[0xF00] = "\0AAAAAAAAAAAAAAAA";
//  	max = 10;
// 	printf("%s\n",buff7);
//  	printf("%lu\n", strlcat(buff7, str, max));
// 	printf("%s\n",buff7);
// 	printf("%s\n",buff8);
//  	printf("%lu\n", ft_strlcat(buff8, str, max));
// 	printf("%s\n",buff8);

// 	printf("diff: %d\n",strcmp(buff7,buff8));

// 	return (0);
// }
