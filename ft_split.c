/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:44:59 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/08 18:40:01 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	ft_free(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free (arr);
	arr = NULL;
}

static char	*ft_save(char const *s, char c, size_t *cursor)
{
	char	*word;
	size_t	len;
	size_t	start;

	len = 0;
	while (s[*cursor] == c && s[*cursor])
		(*cursor)++;
	start = *cursor;
	while (s[*cursor] != c && s[*cursor])
	{
		len++;
		(*cursor)++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words_count;
	size_t	i;
	size_t	cursor;

	if (!s)
		return (NULL);
	words_count = ft_count(s, c);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	cursor = 0;
	while (i < words_count)
	{
		result[i] = ft_save (s, c, &cursor);
		if (!result[i])
		{
			ft_free (result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
