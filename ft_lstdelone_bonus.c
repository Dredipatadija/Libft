/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:49:37 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 14:57:09 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void del(void *lst)
{
	free(lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	node1 = ft_lstnew(ft_strdup("Hola"));
	node2 = ft_lstnew(ft_strdup("borrado"));
	node3 = ft_lstnew(ft_strdup("ultimo nodo, borrame"));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("sin borrar el ultimo nodo: %d\n", ft_lstsize(node1));
	ft_lstdelone(node3, del);
	printf("ultimo nodo borrado: %d\n", ft_lstsize(node1));
}
