/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:17:19 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/22 21:16:31 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	if (alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			temp = *alst;
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
	}
}
