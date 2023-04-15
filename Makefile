# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 12:12:41 by jgomes-v          #+#    #+#              #
#    Updated: 2023/04/14 15:22:04 by jgomes-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
LIBRARY = libft.a
AR = ar rcs
FILES= ft_strlen.c ft_isdigit.c ft_isalpha.c ft_atoi.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_calloc.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_memcmp.c 
OBJECTS= ft_isdigit.o ft_strlen.o ft_isalpha.o ft_atoi.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strncmp.o ft_strnstr.o ft_strchr.o ft_strrchr.o ft_strlcpy.o ft_strlcat.o ft_memset.o ft_bzero.o ft_calloc.o ft_memmove.o ft_memcpy.o ft_memchr.o ft_memcmp.o
INCLUDE= -I .
HEADER= libft.h

.c.o: $(CFILES)
	$(COMPILER) $(FLAGS) $(INCLUDE) -c -o $@ $<

$(LIBRARY): $(OBJECTS)
	$(AR) $@ $^ $(HEADER)

all: $(LIBRARY)

clean:
	rm -f $(OBJECTS) $(LIBRARY)
fclean: clean
	rm $(LIBRARY)

re: clean all
