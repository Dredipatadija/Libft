/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:48:35 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/15 13:28:41 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
  size_t  i;

  i = 0;
  if (s == 0)
	  return (0);
  while (s[i] != '\0')
  {
    write(fd, &s[i], sizeof(char));
    i++;
  }
}

/*int	main(void)
{
	char	c;
	int		fd;
	
	c = 'e';
	fd = open("prueba_fd", O_RDWR);
	ft_putchar_fd(c, fd);
	close(fd);
	return(0);
}*/
