/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:22:14 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/07 22:41:09 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	source_len;
	size_t	finish_len;

	if (!s)
		return (NULL);
	source_len = ft_strlen(s);
	if (source_len <= start)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	finish_len = source_len - start;
	if (finish_len > len)
		finish_len = len;
	ptr = (char *)malloc(sizeof(char) * (finish_len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, finish_len + 1);
	return (ptr);
}
