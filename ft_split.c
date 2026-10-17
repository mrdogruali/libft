/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 22:13:42 by adogru            #+#    #+#             */
/*   Updated: 2026/10/16 16:10:11 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static t_size_t	word_counter(char const *s, char c)
{
	t_size_t	ctr;
	t_size_t	i;

	i = 0;
	ctr = 0;
	while (s[i])
	{
		if (s[i] == c)
			ctr++;
		i++;
	}
	return (ctr);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	char		*f_ch;
	char		*l_ch;
	t_size_t	i;
	t_size_t	wc;

	wc = word_counter(s, c);
	f_ch = (char *) s;
	l_ch = ft_strchr(s, c);
	if (wc == 0)
		splitted = malloc(sizeof(char *) * 2);
	else
		splitted = malloc(sizeof(char *) * (wc + 1));
	if (splitted == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (wc--)
	{
		splitted[i++] = ft_substr(f_ch, 0, (l_ch - f_ch));
		f_ch = l_ch + 1;
		l_ch = ft_strchr(f_ch + 1, c);
	}
	l_ch = malloc(sizeof(f_ch) * (char));
	ft_strlcpy(l_ch, (const char *) f_ch, ft_strlen())
	splitted[i++] = l_ch
	splitted[i] = NULL;
	return (splitted);
}

int main()
{
	const char *s = "abcabdckkkkkk";
	char **result;
	char c = 'c';
	char k = 'm';
	int i = 0;

	printf("%lu\n",word_counter(s,c));

	result = ft_split(s,c);

	if(result == NULL)
		return (0);

	while (result[i])
	{
		printf("result: %s\n",&result[i][0]);
		i++;
	}
	free(result);

	s = "hello!";
	c = ' ';
	result = ft_split(s,c);

	if(result == NULL)
		return (0);

	i = 0;
	while (result[i])
	{write(1,&k,1);
		printf("result: %s\n",&result[i][0]);
		i++;
	}

	free(result);

	// s = "\0aa\0bbb";
	// i = 0;
	// printf("%lu\n",word_counter(s,c));

	// result = ft_split(s,c);

	// if(result == NULL)
	// 	return (0);

	// while (result[i])
	// {
	// 	printf("result: %s\n",&result[i][0]);
	// 	i++;
	// }
	// free(result);
}
