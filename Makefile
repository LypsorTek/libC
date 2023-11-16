##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

NAME	= test

CC	= gcc

RM	= rm -f

SRCS	= lib/my_putstr.c \
			lib/my_putchar.c \
			lib/my_put_nbr.c \
			lib/my_strcat.c \
			lib/my_strcmp.c \
			lib/my_strlen.c \
			lib/my_getnbr.c \
			lib/my_strcpy.c \
			lib/my_strncat.c \
			lib/my_strdup.c \
			lib/my_revstr.c \
			lib/my_strncmp.c \
			lib/my_str_to_word_array.c \
			lib/my_strncpy.c \
			lib/my_strchr.c \
			lib/my_isdigit.c \
			lib/my_isneg.c \
			main.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./utilities/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
