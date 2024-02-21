/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:50:36 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/21 11:19:01 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (*lst == 0 || new == 0)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}
/*int	main(void)
{
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("viejo nodo");
	new = ft_lstnew("nuevo y primer nodo ya colocado");
	printf("antes: %s\n", node->content);
	ft_lstadd_back(&node, new);
	printf("después: %s\n", node->content);
	printf("después: %s\n", node->next->content);
	return (0);
}*/
