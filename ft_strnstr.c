/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:05:57 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/02 11:49:29 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *) &str[i]);
	while ((i < len) && str[i] && needle[j])
	{
		if (needle[j] == str[i])
		{
			if (needle[j + 1] == '\0')
				return ((char *) &str[i - j]);
			if (needle[j + 1] == str[i + 1])
				j++;
		}
		i++;
	}
	return ((void *) 0);
}

/*int	main(void)
{
	const char		*str;
	const char		*needle;
	size_t	len;

	str = "aaabcabcd";
	needle = "aabc";
	len = -1;
//	printf("original: %s\n", strnstr(str, needle, len));
	printf("propia: %s\n", ft_strnstr(str, needle, len));
	return (0);
}*/
