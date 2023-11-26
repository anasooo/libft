/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:43:07 by asodor            #+#    #+#             */
/*   Updated: 2023/11/16 22:15:00 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*save;

	if (lst && del)
	{
		head = *lst;
		while (head)
		{
			save = head->next;
			ft_lstdelone(head, del);
			head = save;
		}
		*lst = NULL;
	}
}
