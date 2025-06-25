/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:07:03 by eonen             #+#    #+#             */
/*   Updated: 2025/06/20 18:34:09 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_strnstr(const char *haystack,	const char *needle, size_t len)
{
    size_t i, j;
    i=0;

    if(!*needle)
        return ((char *)haystack);

    while (haystack[i] && i < len)
    {
        j=0;
        while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j] && (i +j) < len)
        {
            j++;
        }
        if (!needle[j])
                return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}