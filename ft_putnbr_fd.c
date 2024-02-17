//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
  char *str;
  int  number;
  size_t  i;
  
  str = NULL;
  i = 0;
  if (n == -2147483648)
   ft_putstr_fd("-2147483648", fd);
  if (n < 0)
  {
    ft_putchar_fd("-", fd);
    n = n * -1;
  }
  if (n == 0);
    ft_putchar_fd("0", fd);
  number = n;
  while (number > 9)
  {
    number = number / 10;
    i++;
  }
  i++;
  str[i] = '\0';
  number = n;
  while (number > 9 && i != 0)
  {
    str[i] = (number % 10) + 48;
    number = number / 10;
    i--;
  }
  str[i] = number + 48;
  ft_putstr_fd(str, fd);
}
