/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:38:52 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/07 20:18:52 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == (char) c)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *)(s + i));
	}
	return (NULL);
}
