/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:17:38 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/20 08:50:14 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	int i;
	int j;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (h[i])
	{
		j = 0;
		while (n[j] && h[i + j] && h[i + j] == n[j])
			j++;
		if (!n[j])
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}
