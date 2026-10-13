/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:28:21 by adogru            #+#    #+#             */
/*   Updated: 2026/10/13 17:27:09 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

t_size_t	ft_strlen(const char *s)
{
	t_size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsiz)
{
	t_size_t	j;

	j = 0;
	if (dstsiz == 0)
	{
		while (src[j] != '\0')
		{
			j++;
		}
		return (j);
	}
	else
	{
		while (j < dstsiz - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}


t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size)
{
	t_size_t	i_dst;
	t_size_t	i;
	t_size_t	ret_val;
	char *temdst;
	const char *temsrc;

	i_dst = ft_strlen(dest);
	ret_val =  + ft_strlen(src) + i_dst;
	i = 0;
	if (size < i_dst)
		return (size + ft_strlen((const char *)src));
	temdst = &dest[i_dst + i];
	temsrc = (const char *) &src[i];
	ft_strlcpy(temdst, temsrc, size - i_dst);
	if((i_dst + i) == size && i_dst < size)
		i_dst--;
	else
		dest[i_dst] = '\0';
	return (ret_val);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char *src = "World!";
 	char dst1[20] = "Hello, ";
 	char dst2[20] = "Hello, ";

	printf("dest1: %s\n",dst1);
 	printf("size: %lu\n", strlcat(dst1, src, 20));
	printf("dest1: %s\n",dst1);

	printf("dest2: %s\n",dst2);
 	printf("size: %lu\n", ft_strlcat(dst2, src, 20));
	printf("dest2: %s\n",dst2);

	printf("diff1: %d\n",strcmp(dst1,dst2));

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("max: %lu\n", max);
	printf("buff1: %s\n",buff1);
 	printf("%lu\n",strlcat(buff1, str, max));
	printf("buff1: %s\n",buff1);
	printf("max: %lu\n", max);
	printf("buff2: %s\n",buff2);
 	printf("%lu\n",ft_strlcat(buff2, str, max));
	printf("buff2: %s\n",buff2);

	printf("diff2: %d\n",strcmp(buff1,buff2));

	str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff3[0xF00] = "there is no stars in the sky";
 	char buff4[0xF00] = "there is no stars in the sky";
	max =  strlen(str) + strlen(buff3);
	printf("max: %lu\n", max);
	printf("buff3: %s\n",buff3);
 	printf("%lu\n",strlcat(buff3, str, max));
	printf("buff3: %s\n",buff3);
	printf("max: %lu\n", max);
	printf("buff4: %s\n",buff4);
 	printf("%lu\n",ft_strlcat(buff4, str, max));
	printf("buff4: %s\n",buff4);

	printf("diff3: %d\n",strcmp(buff3,buff4));

	char s1[4] = "";
 	char s2[4] = "";
	printf("s1: %s\n",s1);
 	printf("%lu\n",strlcat(s1, "thx to ntoniolo for this test !", 4));
	printf("s1: %s\n",s1);
	printf("s2: %s\n",s2);
 	printf("%lu\n",ft_strlcat(s2, "thx to ntoniolo for this test !", 4));
	printf("s2: %s\n",s2);
	printf("diff4: %d\n",strcmp(s1,s2));

	src = "";
	char	array7[11] = "aaaaaaaa";
	char	array8[11] = "aaaaaaaa";

	printf("%s\n",array7);
	printf("%lu\n", strlcat(array7, src,11));
	printf("%s\n",array7);

	printf("%s\n",array8);
	printf("%lu\n", ft_strlcat(array8, src,11));
	printf("%s\n",array8);

	printf("diff5: %d\n",strcmp(array7,array8));

	src = "aaa";
	char	array3[5] = "";
	char	array4[5] = "";

	printf("%s\n",array3);
	printf("%lu\n", strlcat(array3, src,5));
	printf("%s\n",array3);

	printf("%s\n",array4);
	printf("%lu\n", ft_strlcat(array4, src,5));
	printf("%s\n",array4);

	printf("diff6: %d\n",strcmp(array3,array4));

	str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff5[0xF00] = "";
 	char buff6[0xF00] = "";
 	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;

 	strlcat(buff5, str, max);
 	ft_strlcat(buff6, str, max);

	printf("diff7: %d\n",strcmp(buff5,buff6));

	str = "n\0AA";
 	char buff7[0xF00] = "\0AAAAAAAAAAAAAAAA";
 	char buff8[0xF00] = "\0AAAAAAAAAAAAAAAA";
 	max = 10;
	printf("%s\n",buff7);
 	printf("%lu\n", strlcat(buff7, str, max));
	printf("%s\n",buff7);
	printf("%s\n",buff8);
 	printf("%lu\n", ft_strlcat(buff8, str, max));
	printf("%s\n",buff8);

	printf("diff8: %d\n",strcmp(buff7,buff8));

	char desta[14] = "";
	memset(desta, 'r', 14);
	char destb[14] = "";
	memset(destb, 'r', 14);
    write(1, desta, 15);
	write(1, "\n", 1);
	printf("%lu\n", strlcat(desta, "lorem ipsum dolor sit amet", 15));
    write(1, desta, 15);
	write(1, "\n", 1);
    write(1, destb, 15);
	write(1, "\n", 1);
	printf("%lu\n", ft_strlcat(destb, "lorem ipsum dolor sit amet", 15));
    write(1, destb, 15);
	write(1, "\n", 1);
	printf("diff9: %d\n",strcmp(desta,destb));
	return (0);
}

