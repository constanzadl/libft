/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:09:50 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/20 17:56:17 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int i;
	int j;
	int len_cpy;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (h[i] && len)
	{
		j = 0;
		len_cpy = len;
		while (h[i + j] && h[i + j] == n[j] && len_cpy)
		{
			j++;
			len_cpy--;
		}
		if (!n[j])
			return ((char *)(h + i));
		i++;
		len--;
	}
	return (NULL);
}
