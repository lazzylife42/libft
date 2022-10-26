NAME = libft

CC = gcc

MY_SOURCES = main.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen \
	libft.h

MY_OBJECTS = $(MY_SOURCES: .c=.o)
	$(CC) -o $(NAME) $(MY_OBJECTS)

libft: main.c
	$(CC) -c main.c

CFLAGS += -Wall -Wextra -Werror

clean: rm -rf *.o
