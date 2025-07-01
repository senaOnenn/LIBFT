/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:22:39 by eonen             #+#    #+#             */
/*   Updated: 2025/06/26 14:22:40 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numlen(int n)
{
    int len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        len = 1;
    while (n != 0)
    {
        n /= 10;
        len ++;
    }
    return len;
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    len = numlen(n);
    str = ft_calloc(len +1, sizeof(char));
    if (!str)
        return (NULL);
    if (n == 0)
        str[0] = '0';
    else if(n < 0)
    {
        str[0] = '-';
        if (n == _SC_INT_MIN)
        {
            str[--len] = '8';
            n /= 10;
        }
        n = -n;
    }
    
}