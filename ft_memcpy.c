/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:46:56 by gugascon          #+#    #+#             */
/*   Updated: 2026/01/21 11:35:38 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
