# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 16:04:20 by nrey              #+#    #+#              #
#    Updated: 2024/09/30 16:06:39 by nrey             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRCDIR = srcs
INCDIR = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -r -c -s
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c \
		 $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OFILES = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) 
	$(AR) $(ARFLAGS) $(NAME) $(OFILES)
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
clean:
	rm -f $(OFILES) 
fclean: clean
	rm -f $(NAME)
re: fclean all 

.PHONY: all clean fclean re
