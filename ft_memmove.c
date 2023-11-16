/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:57:43 by asodor            #+#    #+#             */
/*   Updated: 2023/11/08 13:22:56 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (dest > source)
	{
		while (len)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
