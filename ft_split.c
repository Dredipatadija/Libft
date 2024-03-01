/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:38:14 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 13:46:04 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	number;

	i = 0;
	number = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			number++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (number);
}

static size_t	ft_word_len(char const *s, size_t start, char c)
{
	size_t	i;

	i = start;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i - start);
}

static char	**ft_freestr(char **string_array, size_t n_string)
{
	while (n_string > 0)
	{
		n_string--;
		free(string_array[n_string]);
	}
	free(string_array);
	return (0);
}

static char	**ft_loopsplit(char **string_array, char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	n_string;

	i = 0;
	n_string = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_word_len(s, i, c);
			string_array[n_string] = ft_substr(s, i, len);
			if (!string_array[n_string])
				return (ft_freestr(string_array, n_string));
			n_string++;
			i = i + len;
		}
	}
	string_array[n_string] = ((void *)0);
	return (string_array);
}

char	**ft_split(char const *s, char c)
{
	char	**string_array;

	if (!s)
		return ((void *)0);
	string_array = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!string_array)
		return (0);
	string_array = ft_loopsplit(string_array, s, c);
	return (string_array);
}

/*int	main(void)
{
	char const	*s = NULL;
	char		c;
	char		**result;
	size_t		i;

	i = 0;
	c = ' ';
	result = ft_split(s, c);
	if (!s)
		printf("%s\n",(char *)ft_split(s, c));
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}*/
