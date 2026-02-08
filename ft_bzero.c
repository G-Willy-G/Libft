/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugascon <gugascong@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:41:09 by gugascon          #+#    #+#             */
/*   Updated: 2026/02/07 19:53:44 by gugascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

/*ft_bzero pasa de la cadena de memoria s todos a NULL hasta n espacios*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*
void	test_bzero(size_t n)
{
	char	buffer[10];
	size_t	i;
	memset(buffer, 'A', 10);

	printf ("Memoria antes: ");
	for (i = 0; i < 10; i++)
		printf ("%c ", buffer[i]);
	printf ("\n");

	ft_bzero(buffer, n);

	printf ("Memoria después: ");
	for (i = 0; i < 10; i++)
	{
		if (buffer[i] == 0)
			printf("\\0 ");
		else
			printf("%c ", buffer[i]);
	}
	printf ("\n\n");
}

int	main(void)
{
	test_bzero(10);
	test_bzero(5);
	test_bzero(0);
	return (0);
}
*/