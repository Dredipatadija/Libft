/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:14:25 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/02 15:36:57 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc((1 * len) + 1);
	if (!(substr))
		return ((void *)0);
	while (s[start] && (i < len))
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char const		*s = "tiene que copiar desde el 1 hasta el 4";
	unsigned int	start = 26;
	size_t			len = 12;

	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
