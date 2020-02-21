/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:27:38 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/20 16:46:46 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_counter(char const *str, char c)
{
	int result;

	result = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			result++;
		while (*str != c && *str)
			str++;
	}
	return (result);
}

static char		*make_words(char const *str, char c)
{
	char	*word;
	int		k;

	k = 0;
	if (!*str)
		return (NULL);
	while (str[k] != c && str[k] != '\0')
		k++;
	word = ft_strnew(k);
	if (word == NULL)
		return (NULL);
	ft_strncpy(word, str, k);
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		counter;
	int		i;

	i = 0;
	if (!*s)
		return (NULL);
	counter = word_counter(s, c);
	words = (char**)malloc(sizeof(char *) * (counter + 1));
	if (words == NULL)
		return (NULL);
	while (i < counter)
	{
		while (*s == c)
			s++;
		words[i] = make_words(s, c);
		if (words[i] == NULL)
			return (NULL);
		while (*s != c && *s)
			s++;
		i++;
	}
	words[i] = 0;
	return (words);
}
