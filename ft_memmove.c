/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:56:27 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 13:56:42 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest && !src && len)
		return (NULL);
	if (str)
	{
		ft_memcpy(str, src, len);
		ft_memcpy(dest, str, len);
	}
	return (dest);
}
