/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:06:56 by eonen             #+#    #+#             */
/*   Updated: 2025/06/22 18:00:56 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while(str[i] != '\0')
    {
      i++;
    }
    return i;
}

int main()
{
    const char *str = "Selam";
    printf("%zu",ft_strlen(str));
}