#include <stdio.h>
#include "libft.h"

int  ft_lstsize(t_list *lst)
{
  size_t   i;
  
  i = 0;
  while (lst)
  {
    lst = lst->next;
    i++;
  }
  return (i);
}

int main(void)
{
  t_list  *node1;
  t_list  *node2;
  t_list  *node3;
  
  node1 = ft_lstnew("Hola");
  node2 = ft_lstnew("Hola");
  node3 = ft_lstnew("Hola");
  node1->next = node2;
  node2->next = node3;
  node3->next = NULL;
  printf("%d\n", ft_lstsize(node1));
  return 0;
}
