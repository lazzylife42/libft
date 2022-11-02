# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smonte-e <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 12:38:23 by smonte-e          #+#    #+#              #
#    Updated: 2022/11/02 14:19:03 by smonte-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc
CFLACGS = -Wall -Wextra -Werror

MY_SOURCES = main.c \
	ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_strlen.c \
    ft_memset.c\
    ft_bzero.c

MY_OBJECTS = $(MY_SOURCES: .c=.o)

all: $(NAME)

libft: libft.o main.o
	$(CC) -o $(NAME) $(MY_OBJECTS)

libft.o:

main.o: main.c libft.h
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME):
	$(CC) -o $(MY_OBJECTS) $(MY_SOURCES)

.c.o:
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f *.o
