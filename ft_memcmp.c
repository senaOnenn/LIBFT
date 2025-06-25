/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:25 by eonen             #+#    #+#             */
/*   Updated: 2025/06/25 20:04:53 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *first;
    unsigned const char *second;
    size_t i;
    
    first = (unsigned const char *)s1;
    second = (unsigned const char *)s2;
    i = 0;
    
    while(i < n && (first[i] == second[i]))
    {
        i++;
    }
    if(i == n)
        return (0);
    else
        return (first[i] - second [i]);
}
