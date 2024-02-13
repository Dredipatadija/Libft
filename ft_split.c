/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:38:14 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/13 14:27:27 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	number;

	i = 0;
	number = 0;
	if (s == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			number++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (number);
}

static size_t	ft_word_len(char const *s, size_t start, char c)
{
	size_t	i;

	i = start;
	if (s == 0)
		return (0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i - start);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	n_string;
	char	**string_array;

	i = 0;
	n_string = 0;
	string_array = ((void *)0);
	string_array = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!string_array || s == 0)
		return (0);
	while (s[i] != '\0')
	{
		len = ft_word_len(s, i, c);
		while (s[i] != '\0' && i <= len)
		{
			if (s[i] == c)
			{
				string_array[n_string] = ft_substr(s, (i - len), len);
				n_string++;
				i++;
			}
			else
				i++;
		}
	}
	return (string_array);
}

int	main(void)
{
	char const	*s;
	char		c;
	char		**result;
	size_t		i;

	i = 0;
	s = "La Tierra es plana";
	c = ' ';
	result = ft_split(s, c);
	while (result[i] != '\0')
	{
		write(1, result[i], sizeof(char *));
		i++;
	}
	return (0);
}
