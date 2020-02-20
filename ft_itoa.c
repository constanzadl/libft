/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:34:45 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/19 17:11:45 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int nb)
{
	int size;

	size = 1;
	while (nb /= 10)
		size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char *str;
	char *c;

	c = (char *)malloc(sizeof(char) * 2);
	if (!c)
		return (NULL);
	str = ft_strnew(ft_size(n));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str = ft_strjoin(str, "-");
		return (ft_strjoin(str, ft_itoa(-n)));
	}
	else if (n >= 10)
		return (ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10)));
	else
	{
		*c = n + '0';
		str = ft_strjoin(str, c);
	}
	return (str);
}
