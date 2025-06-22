/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:48 by eonen             #+#    #+#             */
/*   Updated: 2025/06/22 21:49:12 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstlen= ft_strlen(dst);
    size_t srclen= ft_strlen(src);
    size_t i = 0;
    
    if(size == 0)
        return (srclen);
    if (dst < size)
        return (size + srclen);
    
    while(src[i] && dstlen + i < size -1)
    {
        dst[dstlen + i ] = src[i];
        i++;
    }
    dest[dstlen + i] = '\0';
    return (dstlen + srclen);
}
