/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:46:39 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/06 19:56:57 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((i + j) < len && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*void	test_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*resultado = ft_strnstr(haystack, needle, len);
	printf("Busco: \"%s\" en \"%s\" (Max len: %zu)\n", needle, haystack, len);

	if (resultado)
	{
		printf (" -> Resultado \"%s\"\n", resultado);
	}
	else
	{
		printf (" -> Resultado NULL\n");
	}
	printf ("-------------------------------------\n");
}
int	main (void)
{
	const char *haystack = "Hola Mundo 42";
	const char *oculto = "Hola\0Mundo";

	printf ("\n--- INICIO DEL TEST ---\n\n");
	
	// Debería encontrarlo y devolver "Mundo 42"
	test_strnstr(haystack, "Mundo", 15);
	// Debería encontrarlo.
    test_strnstr(haystack, "Mundo", 13);
	// Al no llegar a la M debe devolver NULL
	test_strnstr(haystack, "Mundo", 5);
	// Según el manual, si needle es "", devuelve todo el haystack.
    test_strnstr(haystack, "", 15);
	// Dará NULL, busca algo que no está
    test_strnstr(haystack, "Banana", 15);
	// Empieza igual pero no, debolverá NULL
	test_strnstr(haystack, "MunX", 15);
	// No debería encontrarlo, para cuando en \0
	test_strnstr(oculto, "Mundo", 15);
	return (0);
}*/