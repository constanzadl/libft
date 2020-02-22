/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:18:36 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/21 18:59:00 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (*alst)
	{
		while (*alst)
		{
			temp = *alst;
			*alst = (*alst)->next;
			ft_lstdelone(&temp, del);
		}
	}
	*alst = NULL;
}
