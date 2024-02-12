# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:02:09 by arenilla          #+#    #+#              #
#    Updated: 2024/02/12 09:14:03 by arenilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#especifico el nombre del programa que quiero crear
NAME = libft.a

#compilador que voy a usar
CC = cc

#las flags con las que quiero compilar
CFLAGS = -Wall -Wextra -Werror

#archivos fuente a compilar para crear el programa, legibles x personas
SOURCES = ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_atoi.c\
		  ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_bzero.c\
		  ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_calloc.c\
		  ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c ft_isalnum.c\
		  ft_memchr.c ft_strchr.c ft_strncmp.c ft_substr.c ft_strjoin.c\

#obj. (arch.fuente convertidos) a enlazar para crear programa, legibles x máquina parcial
OBJECTS = $(SOURCES:.c=.o)

#regla que permite ejecutar make sin argumentos, representa el objetivo principal del makefile
all: $(NAME)

#ejecuto el comando ar con extensiones -c, -r y -s para crear el archivo NAME (librería) a partir de los OBJECTS (archivos fuente .o)
$(NAME): $(OBJECTS)
		ar -crs $(NAME) $(OBJECTS)

#limpio archivos .o, para dejar solo archivos fuente .c
clean:
		rm -f $(OBJECTS)

#limpio el programa .a y los .o con el clean
fclean: clean
		rm -f $(NAME)

#limpio todo con el fclean y compilo otra vez con el all
re: fclean all
