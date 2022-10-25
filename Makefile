NAME = libft

MY_SOURCES = main.c \
			 ft_isalnum.c \
			 ft_isalpha.c \
			 ft_isascii.c \
			 ft_isdigit.c \
			 ft_isprint.c \
			 ft_strlen

MY_OBJECTS = $(MY_SOURCES: .c=.o)

CFLAGS += -Wall -Wextra -Werror
