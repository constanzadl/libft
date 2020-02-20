/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:54:07 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 13:54:59 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[i]) && s[i] != '\0')
		i++;
	if (s[i] == '\0')
	{
		str = ft_strnew(0);
		str[0] = '\0';
		return (str);
	}
	while (ft_isspace(s[end]) && end > 0)
		end--;
	str = ft_strsub(s, i, end - i + 1);
	if (!str)
		return (NULL);
	return (str);
}
