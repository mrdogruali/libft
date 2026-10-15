/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 22:13:42 by adogru            #+#    #+#             */
/*   Updated: 2026/10/15 23:19:03 by adogru           ###   ########.fr       */
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

	if (!*s)
		return (NULL);
	wc = word_counter(s, c);
	splitted = malloc(sizeof(char *) * (wc + 1));
	if (splitted == NULL)
		return (NULL);
	f_ch = (char *) s;
	l_ch = ft_strchr(s, c);
	i = 0;
	while (wc)
	{
		splitted[i++] = ft_substr(f_ch, 0, (l_ch - f_ch));
		f_ch = l_ch + 1;
		l_ch = ft_strchr(l_ch + 1, c);
		wc--;
	}
	splitted[i++] = f_ch;
	splitted[i] = NULL;
	return (splitted);
}

int main()
{
	const char *s = "abcabdckkkkkk";
	char **result;
	char c = 'c';
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



	s = "\0aa\0bbb";
	i = 0;
	printf("%lu\n",word_counter(s,c));

	result = ft_split(s,c);

	if(result == NULL)
		return (0);

	while (result[i])
	{
		printf("result: %s\n",&result[i][0]);
		i++;
	}

}