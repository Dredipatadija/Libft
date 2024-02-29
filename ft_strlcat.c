/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:23:11 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 09:43:37 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (!dst && !dstsize)
		return (srclen);
	if (dst == NULL && dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && ((dstlen + 1) < dstsize))
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return ((dstlen - i) + srclen);
}

/*int	main(void)
{
	char		dst[0];
	const char	*src = ", tu";
	size_t		dstsize;

	dstsize = -1;
	printf ("original: %lu\n", strlcat(dst, src, dstsize));
//	printf ("propia: %lu\n", ft_strlcat(dst, src, dstsize));
	return (0);
}*/
