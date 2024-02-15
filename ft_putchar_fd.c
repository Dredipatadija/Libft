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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
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
