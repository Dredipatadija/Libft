/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:09:16 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/15 10:47:58 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*static char	ft_2toupper(unsigned int i, char c)
{
	if (i % 2 != 0)
	{
		if (c > 96 && c < 123)
			c = c - 32;
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_i;
	char	*str;

	len_i = ft_strlen(s);
	if (s == 0 || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (len_i + 1));
	if (!str)
		return (0);
	len_i = 0;
	while (s[len_i] != '\0')
	{
		str[len_i] = f(len_i, s[len_i]);
		len_i++;
	}
	str[len_i] = '\0';
	return (str);
}

/*int	main(void)
{
	char const	*s;

	s = "hola, que hay?";
	printf("%s\n", ft_strmapi(s, ft_2toupper));
	return (0);
}*/
