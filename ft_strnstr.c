/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:56:11 by asodor            #+#    #+#             */
/*   Updated: 2023/11/04 23:56:15 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// not completed..................
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;
    if(*needle == '\0')
        return (char *)(haystack);;

    while (*haystack)
    {
        while ( *haystack == needle[i] && *needle && i < len)
            i++;
        if(needle[i] == '\0')
            return (char *)(haystack);
        i = 0;
        haystack++;
    }
    return (NULL);
}
