/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:04:07 by asodor            #+#    #+#             */
/*   Updated: 2023/11/04 04:04:09 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    size_t len_s;
   
   i = 1;
   len_s = ft_strlen(s);
    while(*s != '\0')
        s++;
    
    while(*(s - i) != (char) c)
    {
        if(i == len_s)
        return (0);
        i++;
    }
    return ((char *)(s - i));
}

