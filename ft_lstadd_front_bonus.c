/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:56:28 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 12:59:08 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("viejo nodo");
	new = ft_lstnew("nuevo y primer nodo ya colocado");
	printf("antes, contenido 1º nodo: %s\n", node->content);
	ft_lstadd_front(&node, new);
	printf("después, contenido 1º nodo: %s\n", node->content);
	printf("después, contenido 2º nodo: %s\n", node->next->content);
	return (0);
}*/
