/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:33:46 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/21 19:35:29 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_new(t_list **alst, t_list *new)
{
	t_list *temp;

	if (alst)
	{
		if (!*alst)
			*alst = ft_lstnew(new->content, new->content_size);
		else
		{
			temp = *alst;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = ft_lstnew(new->content, new->content_size);
		}
	}
}
