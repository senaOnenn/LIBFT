/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:22:32 by eonen             #+#    #+#             */
/*   Updated: 2025/07/01 17:48:35 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;
	int		inword;

	i = 0;
	words = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c && inword == 0)
		{
			words++;
			inword = 1;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (words);
}

static void	ft_free(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	totalwords;
	size_t	current;
	size_t	start;
	size_t	len;

	if (!s)
		return (NULL);
	totalwords = countwords(s, c);
	result = (char **)malloc(sizeof(char *) * (totalwords + 1));
	if (!result)
		return (NULL);
	current = 0;
	start = 0;
	while (current < totalwords)
	{
		while (s[start] == c)
			start++;
		len = 0;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		result[current] = ft_substr(s, start, len);
		if (!result[current])
		{
			ft_free(result, current);
			return (NULL);
		}
		start = start + len;
		current++;
	}
	result[current] = NULL;
	return (result);
}