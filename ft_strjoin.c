/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:55:08 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/07 19:38:03 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc (sizeof(char) * (len1 + len2 + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len1);
	ft_memcpy(ptr + len1, s2, len2);
	ptr[len1 + len2] = '\0';
	return (ptr);
}
