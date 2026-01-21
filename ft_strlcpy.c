/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:33:56 by gugascon          #+#    #+#             */
/*   Updated: 2026/01/21 20:09:40 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libc.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while ((i + 1 < dstsize) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}

	return (i);
}

/*Creo un contador e Inicializo
Bucle que siga siempre que el src no acabe y el contador sea uno menor al destino
Si acaba antes el source, reyena el resto con carácteres NULL
Si falta espacio para pegar el source va aumentando el contador con 
lo que hubiera sido*/
