/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:31:14 by gugascon          #+#    #+#             */
/*   Updated: 2026/01/25 13:28:41 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && ((dst_len + i) < (dstsize - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*Recogo la longitud del source y el destino
Si el tamañp de destino es menor a la longitud del destino retornamos
el tamaño de destino mas la longitud de origen. En los demas casos, mientras que
se acabe el source y la longitud de destino inicial mas las posiciones avanzadas
sea menor al tamaño final menos 1 para guardar el caracter NULL. Va concatenando
el src en el dst. Finalmente, en la ultima posición ponemos el caracter nulo y 
retornamos el tamaño de origen mas la longitud de destino*/
