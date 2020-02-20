/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:53:03 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 13:53:53 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	str = (char*)ft_memalloc(size + 1);
	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
