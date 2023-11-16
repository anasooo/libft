/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 01:07:55 by asodor            #+#    #+#             */
/*   Updated: 2023/11/15 01:47:52 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = NULL;
	if (s)
		new_s = ft_strdup(s);
	if (new_s)
	{
		while (new_s[i])
		{
			new_s[i] = f(i, new_s[i]);
			i++;
		}
	}
	return (new_s);
}
