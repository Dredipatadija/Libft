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

void	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
    return (0);
  ft_putstr_fd(s, fd);
  write(fd, "\n", 1);
}

/*int	main(void)
{
	char	*s;
	int	fd;
	
	c = 'e';
	fd = open("prueba_fd", O_RDWR);
	ft_putchar_fd(s, fd);
	close(fd);
	return(0);
}*/
