/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:22:25 by eonen             #+#    #+#             */
/*   Updated: 2025/06/26 14:22:26 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    char *start;
    char *end;
    char *trimmedstr;
    size_t copylen;
    if (!s1 || !set)
        return (NULL);
    start = (char *)s1;
    while (*start && ft_strchr(set, *start))
        start++;
    if (*start == '\0')
        end = start -1;
    else{
        end =(char *)s1 + ft_strlen(s1) - 1;
        while(end > start && ft_strchr(set, *end))
            end--; 
    }
    copylen = 0;
    if (end >= start)
        copylen = (size_t)(end - start + 1);
    trimmedstr = (char *)malloc(copylen + 1);
    if (!trimmedstr)
        return (NULL);
    ft_memcpy(trimmedstr,start,copylen);
    trimmedstr[copylen] = '\0';
    return (trimmedstr);    
}