#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
  while (*lst)
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
	printf("antes: %s\n", node->content);
	ft_lstadd_front(&node, new);
	printf("después: %s\n", node->content);
	printf("después: %s\n", node->next->content);
	return (0);
}*/
