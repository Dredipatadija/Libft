/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:57:48 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 09:55:34 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static void del(void *lst)
{
	free(lst);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first_node;
	t_list	*temporal_node;

	if (!*lst || !del)
		return ;
	first_node = *lst;
	while (first_node)
	{
		temporal_node = first_node->next;
		del(first_node->content);
		free(first_node);
		first_node = temporal_node;
	}
	*lst = 0;
}

/*int	main(void)
{
	t_list	**lst;
	t_list	*no1;
	t_list	*no2;
	t_list	*no3;

	no1 = ft_lstnew("1");
	no2 = ft_lstnew("dos");
	no3 = ft_lstnew("3");
	no1->next = no2;
	no2->next = no3;
	no3->next = NULL;
	lst = &no1;
	no1->content = (char *)malloc(sizeof(char) * ft_strlen(no1->content) + 1);
	no2->content = (char *)malloc(sizeof(char) * ft_strlen(no2->content) + 1);
	no3->content = (char *)malloc(sizeof(char) * ft_strlen(no3->content) + 1);
	ft_lstclear(lst, del);
	if (*lst == NULL)
		printf("lista vacía");
	return (0);
}*/
