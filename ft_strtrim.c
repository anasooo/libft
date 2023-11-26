/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:15:46 by asodor            #+#    #+#             */
/*   Updated: 2023/11/22 15:16:11 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_first(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static size_t	check_last(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_strchr(set, s1[len - i - 1]) != NULL)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	r;
	size_t	len;

	if (!s1 || !set)
		return (0);
	l = check_first(s1, set);
	r = check_last(s1, set);
	len = ft_strlen(s1);
	return (ft_substr(s1, l, len - l - r));
}
