/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:14:25 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/11 18:12:03 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	if (ft_strlen(s) < start)
	{
		substr = ft_strdup("");
		return (substr);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (0);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char const		*s = "tiene que copiar desde el 1 hasta el 4";
	unsigned int	start = 26;
	size_t			len = 0;

	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
