/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:18:59 by eonen             #+#    #+#             */
/*   Updated: 2025/06/26 15:25:04 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *substr;
    size_t slen;
    size_t actuallen;
    
    if(s == NULL)
        return NULL;
    slen = ft_strlen(s);
    if(start >= slen)
        actuallen = 0;
    if(len + start > slen)
        actuallen = slen - start;
    else
        actuallen = len;
    substr = (char *)malloc(actuallen +1);
    if(substr == '\0')
        return NULL;
    ft_memcpy(substr, s + start, actuallen);
    substr[actuallen] = '\0';
    return substr;
}