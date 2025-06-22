NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c	ft_isascii.c	ft_atoi.c	ft_isalnum.c	ft_isdigit.c	ft_isprint.c	ft_strchr.c \
	ft_tolower.c ft_toupper.c	ft_strdup.c	ft_strlen.c

OBJ = $(SRC:.c=.o)	
all	: $(NAME)
 AR = ar rcs	
$(NAME)	: $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re