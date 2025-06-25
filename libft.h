/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:07:19 by eonen             #+#    #+#             */
/*   Updated: 2025/06/23 21:04:44 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str);
//bzero
//calloc
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
//memchr
//memcmp
//memcpy
//memmove
//memset
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack,	const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);


char *ft_substr(char const *s, unsigned int start, size_t len);


#endif