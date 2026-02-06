/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:29:57 by gugascon          #+#    #+#             */
/*   Updated: 2026/01/25 13:36:53 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*FUNCION: BUSCAR UNA LETRA EN UN STRING
Mientras que el contrnido del puntero no sea a el caracter que corresponde a c,
el cual hemos casteado, sigue el bucle buscando. Si llega hasta el final del
string sin encontrarlo retorna NULL, sino sigue avanzando el puntero hsta
encontrar donde esta la letra que buscamos y retornamos el puntero a esa letra*/