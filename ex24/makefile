CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes
SRC_DIR = srcs
SRC_FILES = $(wildcard ($SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

