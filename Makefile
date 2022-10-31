NAME = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror

MY_SOURCES = main.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen \
	ft_memset.c

MY_OBJECTS = $(MY_SOURCES: .c=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

libft: main.c
	$(CC) -c main.c

main: main.o
	$(CC) main.o -o main

clean: rm -f *.o

