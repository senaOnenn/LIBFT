/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:44 by eonen             #+#    #+#             */
/*   Updated: 2025/06/22 19:37:10 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    
    char *dest = malloc (len + 1);
    
    size_t i = 0;
    
    while(s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char *str = "selam";
    char *str1 = ft_strdup(str);
    
    printf("%s",str1);
    
    free(str1);
}