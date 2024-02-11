/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:52:13 by arenilla          #+#    #+#             */
/*   Updated: 2024/01/31 15:20:36 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;

	character = c;
	i = 0;
	while (s[i])
	{
		if (character == s[i])
			return ((char *)(&s[i]));
		else
			i++;
	}
	if (character == '\0')
		return ((char *)(&s[i]));
	return ((void *)0);
}

/*int	main(void)
{
	const char	*s;
	int			c;

	s = "hola, tú";
	c = '\0';
	printf("original: %s\n", strchr(s, c));
	printf("propia: %s\n", ft_strchr(s, c));
	return (0);
}*/
