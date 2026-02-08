/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:38:52 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/08 18:54:02 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_character;

	last_character = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_character = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_character);
}
