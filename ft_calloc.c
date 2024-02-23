/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:25:00 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 11:37:39 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;
	size_t			i;

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

int	main(void)
{
	size_t	count;
	size_t	size;
	char	*array;

	array = "hola";
	count = 5;
	size = sizeof(char);
//	array = calloc(count, (size + 1));
	array = ft_calloc(count, (size + 1));
	if (array)
		printf("bien");
	if (!array)
		printf ("mal");
	return (0);
}
