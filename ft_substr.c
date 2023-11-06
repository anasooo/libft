/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:32 by asodor            #+#    #+#             */
/*   Updated: 2023/11/06 15:04:36 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t i;
    
    i = 0;
    new = malloc((len - start) * sizeof(char));
    if(!new)
        return (NULL);
    while (start < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    retrun (new);
}
    
