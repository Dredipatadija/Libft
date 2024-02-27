/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:25:00 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 07:47:04 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;
	size_t			i;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	array = malloc(count * size);
	if (!array)
		return ((void *) 0);
	i = 0;
	while (i < (count * size))
	{
		array[i] = 0;
		i++;
	}
	return ((void *) array);
}

/*int	main(void)
{
	size_t	count;
	size_t	size;
	char	*array;
	char	*ft_array;

	array = "hola";
	ft_array = "hola";
	count = 5;
	size = sizeof(char);
	array = calloc(SIZE_MAX, SIZE_MAX);
	ft_array = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("%p	%p\n", array, ft_array);
	return (0);
}*/
