/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:33:02 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/12 10:19:04 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scpy;
	size_t	size;
	size_t	j;

	size = ft_strlen(s1);
	scpy = (char *) malloc(size + 1);
	if (!scpy)
		return ((void *) 0);
	j = 0;
	while (s1[j])
	{
		scpy[j] = s1[j];
		j++;
	}
	scpy[j] = '\0';
	return (scpy);
}

/*int	main(void)
{
	const char	*s1;

	s1 = "Hola, caracola";
	printf("original: %d\n", srtdup(s1));
	printf("propia: %s\n", ft_strdup(s1));
	return (0);
}*/
