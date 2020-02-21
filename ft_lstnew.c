/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:36:40 by cduarte-          #+#    #+#             */
/*   Updated: 2020/02/21 12:07:18 by cduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *temp;
	
	temp = (t_list*)malloc(sizeof(t_list));
	if (!(temp))
		return (NULL);
	temp->content = (void*)content;
	temp->content_size = content_size;
	temp->next = NULL;
	return (temp);
}
