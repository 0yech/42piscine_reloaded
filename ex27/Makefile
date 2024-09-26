CC:= cc
NAME:= ft_display_file
CFLAGS:= -Wall -Wextra -Werror
IDIR:=include/
SRCDIR:=src/
CFILES:=$(SDIR)display_file.c
OFILES:=$(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
		   $(CC) -o $@ $^ $(CFLAGS)
%.o: %.c
		$(CC) $(CFLAGS) -I$(IDIR) -o $@ -c $<
clean:
	  $(RM) $(OFILES)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean clean re
