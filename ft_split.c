/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 22:13:42 by adogru            #+#    #+#             */
/*   Updated: 2026/10/17 17:26:20 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static t_size_t	word_counter(char const *s, char c)
{
	t_size_t	ctr;
	t_size_t	i;
	t_size_t	flag;

	i = 0;
	flag = 0;
	ctr = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			flag = 0;
			while (s[i] == c)
				i++;
		}
		else if (flag == 0)
		{
			flag++;
			ctr++;
		}
		i++;
	}
	return (ctr);
}

char	**list_initialiser(t_size_t wc)
{
	char	**list;

	if (wc == 0)
		list = malloc(sizeof(char *) * 2);
	else
		list = malloc(sizeof(char *) * (wc + 1));
	return (list);
}

char	*ignore_splitters(char *l_ch, char c)
{
	t_size_t	i;

	i = 0;
	while (l_ch[i] == c && l_ch[i])
	{
		i++;
	}
	return (&l_ch[i]);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	char		*f_ch;
	char		*l_ch;
	t_size_t	i;
	t_size_t	wc;

	if (s == NULL)
		return (NULL);
	wc = word_counter(s, c);
	splitted = list_initialiser(wc--);
	if (splitted == NULL)
		return (NULL);
	f_ch = ft_strtrim(s, &c);
	i = 0;
	while (wc--)
	{
		l_ch = ft_strchr(f_ch, c);
		splitted[i++] = ft_substr(f_ch, 0, (l_ch - f_ch));
		f_ch = ignore_splitters(l_ch, c);
	}
	l_ch = ft_strdup(f_ch);
	splitted[i++] = l_ch;
	splitted[i] = NULL;
	return (splitted);
}

// int main()
// {
// 	const char *s = "abcabdccckkkkkk";
// 	char **result;
// 	char c = 'c';
// //	char k = 'm';
// 	int i = 0;
// 	printf("%lu\n",word_counter(s,c));
// 	result = ft_split(s,c);
// 	while (result[i])
// 	{
// 		printf("result: %s\n",&result[i][0]);
// 		i++;
// 	}
// 	free(result);

// 	s = "   he llo  !  ";
// 	c = ' ';
// 	result = ft_split(s,c);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result: %s\n",&result[i][0]);
// 		i++;
// 	}
// 	free(result);

// 	s = "!!hello";
// 	c = '!';
// 	printf("%lu\n",word_counter(s,c));
// 	result = ft_split(s,c);
// 	if(result == NULL)
// 		return (0);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result: %s\n",&result[i][0]);
// 		i++;
// 	}
// 	free(result);

// 	s = "hello!!";
// 	c = '!';
// 	printf("%lu\n",word_counter(s,c));
// 	result = ft_split(s,c);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result: %s\n",&result[i][0]);
// 		i++;
// 	}
// 	free(result);

// 	s = "\0aa\0bbb";
// 	i = 0;
// 	printf("%lu\n",word_counter(s,c));
// 	result = ft_split(s,c);
// 	if(result == NULL)
// 		return (0);
// 	while (result[i])
// 	{
// 		printf("result: %s\n",&result[i][0]);
// 		i++;
// 	}
// 	free(result);
// }
