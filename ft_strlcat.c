/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:37:26 by asodor            #+#    #+#             */
/*   Updated: 2023/11/22 09:55:22 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	if (dstsize == 0 && dst == NULL)
		return (ft_strlen(src));
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (dstsize + len_s);
	j = len_d;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_d + len_s);
}
