/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:41:20 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/22 21:28:41 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	if (!str)
		return (NULL);
	while (str[k] != c && str[k] != '\0')
		k++;
	word = ft_strnew(k);
	if (word == NULL)
		return (NULL);
	ft_strncpy(word, str, k);
	return (word);
}

t_list			*ft_lstsplit(char const *s, char c)
{
	t_list	*list;
	t_list	*newnode;
	char	*word;
	int		counter;

	counter = word_counter(s, c);
	if (!s)
		return (NULL);
	while (counter > 0)
	{
		while (*s == c)
			s++;
		word = make_words(s, c);
		newnode = ft_lstnew((char*)word, (size_t)ft_strlen(word));
		ft_lstadd_back(&list, newnode);
		while (*s != c && *s)
			s++;
		counter--;
	}
	return (list);
}
