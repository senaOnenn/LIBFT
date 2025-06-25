/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:29 by eonen             #+#    #+#             */
/*   Updated: 2025/06/25 15:23:05 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;
    size_t i;
    
    d = (unsigned char *)dest;
    s = (unsigned const char *)src;
    i = 0;
    
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
