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

//#include <stdio.h>
#include "libft.h"

/*static void del(void *lst)
{
	free(lst);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

/*int	main(void)
{
	t_list	*node;
	t_list	**lst;
	
	node = ft_lstnew(ft_strdup("Hola"));
	node->next = NULL;
	lst = &node;
	printf("contenido del nodo antes: %s\n", (char *)node->content);
	ft_lstdelone(*lst, del);
	printf("contenido después: %s\n", (char *)node->content);
	if (*lst == NULL)
		printf("éxito, nodo borrado");
	return (0);
}*/
