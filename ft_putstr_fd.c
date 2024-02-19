/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:18:33 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/19 09:18:46 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], sizeof(char));
			i++;
		}
	}
}

/*int	main(void)
{
	char	*s;
	int	fd;
	
	s = "hola, mundano";
	fd = open("prueba_fd_str", O_RDWR | O_CREAT, 0644);
	ft_putstr_fd(s, fd);
	close(fd);
	return(0);
}*/
