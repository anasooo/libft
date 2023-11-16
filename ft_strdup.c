/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:53:05 by asodor            #+#    #+#             */
/*   Updated: 2023/11/11 14:51:16 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char ));
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = ((char *)s1)[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
