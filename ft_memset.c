/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:24:43 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/07 19:45:51 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *) s;
	while (s && n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
