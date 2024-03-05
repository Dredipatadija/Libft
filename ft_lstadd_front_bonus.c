/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:56:28 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 12:57:01 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static void del(void *str)
{
	free(str);
}*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*node;
	t_list	*new;
	t_list	**lst;

	node = ft_lstnew(ft_strdup("viejo nodo"));
	lst = &node;
	new = ft_lstnew(ft_strdup("nuevo y primer nodo ya colocado"));
	printf("antes, contenido 1º nodo: %s\n", node->content);
	ft_lstadd_front(lst, new);
	printf("después, contenido 1º nodo: %s\n", node->content);
	printf("después, contenido 2º nodo: %s\n", node->next->content);
	ft_lstclear(lst, del);
	return (0);
}*/
