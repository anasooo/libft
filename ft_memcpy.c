/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:34:37 by asodor            #+#    #+#             */
/*   Updated: 2023/11/03 17:06:01 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *dest = dst;
    char *source = (char *)src;
    size_t i;

    i = 0;

    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
    
}