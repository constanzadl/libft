/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:50:06 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 15:19:20 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	int		j;

	j = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size > destlen)
		srclen += destlen;
	else
		srclen += size;
	while (src[j] != '\0' && destlen + 1 < size)
	{
		dst[destlen] = src[j];
		destlen++;
		j++;
	}
	dst[destlen] = '\0';
	return (srclen);
}
