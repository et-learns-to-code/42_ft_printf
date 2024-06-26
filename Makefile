NAME = libftprintf.a

SRC_DIR = src/
INC_DIR = include/
UTIL_DIR = util/

SRC = $(addprefix $(SRC_DIR), \
		ft_printf.c) \

UTIL = $(addprefix $(UTIL_DIR), \
ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c)

OBJ = ${SRC:.c=.o}

OBJ_UTIL = ${UTIL:.c=.o}

CC = gcc

INC = -I$(INC_DIR)

CFLAGS = -Wall -Wextra -Werror $(INC)

AR = ar -rc

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_UTIL)
	$(AR) $(NAME) $(OBJ) $(OBJ_UTIL)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_UTIL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
