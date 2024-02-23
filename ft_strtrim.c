/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:24:21 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 08:21:48 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] && (ft_strchr(set, s1[i])))
		i++;
	len = ft_strlen(s1 + i);
	if (len)
	{
		while (s1[i + len - 1] && (ft_strchr(set, s1[i + len - 1])))
			len--;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str = ft_memcpy(str, (s1 + i), len);
	str[len] = '\0';
	return (str);
}

/*int	main(void)
{
	char const	*s1;
	char const	*s2;

	s1 = "12221121Tengo 1 perro y 2 gatos1222111";
	s2 = "12";
	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
}*/
