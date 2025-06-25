/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:32 by eonen             #+#    #+#             */
/*   Updated: 2025/06/25 19:38:16 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (unsigned const char *)src;
    i = 0;
    if (!dest && !src)
        return (NULL);
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }else
    {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        } 
    }
    return dest;
}