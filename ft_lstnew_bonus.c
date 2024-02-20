/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:50:15 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/19 11:10:19 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ((void *)0);
	node->content = content;
	node->next = (void *)0;
	return (node);
}

/*int	main(void)
{
	char	*content;
	t_list	*node;

	content = "hola";
	node = ft_lstnew(content);
	printf("%s\n", node->content);
	return (0);
}*/
