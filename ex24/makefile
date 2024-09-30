NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

SOURCES =    srcs/ft_putchar.c \
            srcs/ft_swap.c \
            srcs/ft_putstr.c \
            srcs/ft_strlen.c \
            srcs/ft_strcmp.c \

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
    @$(AR) $@ $(OBJECTS)
%.o: %.c
    @$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJECTS)
fclean: clean
    @$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
