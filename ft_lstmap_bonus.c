/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:30:35 by asodor            #+#    #+#             */
/*   Updated: 2023/11/20 11:53:54 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*elem;
	void	*tmp;

	if (!f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		elem = ft_lstnew(tmp);
		if (!elem)
		{
			ft_lstclear(&list, del);
			free(tmp);
			return (NULL);
		}
		ft_lstadd_back(&list, elem);
		lst = lst->next;
	}
	return (list);
}
