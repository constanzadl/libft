/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:48:21 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 16:15:59 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strnew(ft_strlen((char*)s));
	if (!str)
		return (NULL);
	while (s[j] != '\0')
	{
		str[j] = (*f)(i, s[j]);
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
