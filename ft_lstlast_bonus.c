#include <stdio.h>
#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
  while (lst->next)
    lst = lst->next;
  return (lst);
}

int  main(void)
{
  t_list  *node1;
  t_list  *node2;
  t_list  *node3;
  
  node1 = ft_lstnew("Hola");
  node2 = ft_lstnew("tu");
  node3 = ft_lstnew("ultimo nodo");
  node1->next = node2;
  node2->next = node3;
  node3->next = NULL;
  printf("%d\n", ft_lstlast(node1));
  return 0;
}
