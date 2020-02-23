/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:02:28 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/22 21:29:11 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list **alst)
{
	int		res;
	t_list	*temp;

	res = 0;
	if (*alst)
	{
		while (*alst)
		{
			temp = *alst;
			*alst = (*alst)->next;
			res++;
		}
	}
	return (res);
}
