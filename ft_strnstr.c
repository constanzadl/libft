/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:09:50 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/20 09:02:40 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int i;
	int j;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (h[i])
	{
		j = 0;
		while (h[i + j] && h[i + j] == n[j] && len > 0)
		{
			j++;
			len--;
		}
		if (!n[j])
			return ((char *)(h + i));
		i++;
		len--;
	}
	return (NULL);
}
