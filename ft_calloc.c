/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:21:16 by asodor            #+#    #+#             */
/*   Updated: 2023/11/05 11:21:19 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
    void *p;

    if(count >= SIZE_MAX && size >= SIZE_MAX)
        return (NULL);
    
    p = malloc(count * size);
    
    if(p)
    {
        ft_bzero(p, count * size);
        return (p);
    }
  
    return(NULL);
}

