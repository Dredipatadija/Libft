/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:53:10 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 13:10:13 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	node1 = ft_lstnew("Hola");
	node2 = ft_lstnew("tu");
	node3 = ft_lstnew("ultimo nodo");
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("antes: %s\n",(node1->content));
	printf("despues: %s\n", ft_lstlast(node1)->content);
	return 0;
}*/
