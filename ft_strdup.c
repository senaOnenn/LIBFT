/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:44 by eonen             #+#    #+#             */
/*   Updated: 2025/06/23 16:08:15 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strdup(const char *s)
{
    int len = ft_strlen(s);
    
    char *dest = malloc (len + 1);
    if(!dest)
        return(NULL);
    
    int i = 0;
    
    while(s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
