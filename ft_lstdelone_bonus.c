/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:49:37 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:55 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void ft_del(void *lst)
{
	free(lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = 0;
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("hola"));
	printf("antes contenido: %s\n", node->content);
	printf("antes nodo: %p\n", *node);
	ft_lstdelone(node, &ft_del);
	printf("despues contenido: %s\n", node->content);
	printf("despues nodo: %p\n", *node);
	return (0);
}
