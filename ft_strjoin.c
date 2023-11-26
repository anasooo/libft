/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:09:38 by asodor            #+#    #+#             */
/*   Updated: 2023/11/22 13:23:22 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(len + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (join);
}
