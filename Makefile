NAME = libftprintf.a

SRC_DIR = src/
INC_DIR = includes/
UTILS_DIR = utils/

SRC = $(addprefix $(SRC_DIR), \
		ft_printf.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_int.c \
		ft_print_percent.c \
		ft_print_pointer.c \
		ft_print_string.c \
		ft_print_unsigned.c)

UTILS = $(addprefix $(UTILS_DIR), \
		ft_putnbr_base.c \
		ft_strlen.c)

OBJ = ${SRC:.c=.o}

OBJ_UTILS = ${UTILS:.c=.o}

CC = gcc

INC = -I$(INC_DIR)

CFLAGS = -Wall -Wextra -Werror $(INC)

AR = ar -rc

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_UTILS)
	$(AR) $(NAME) $(OBJ) $(OBJ_UTILS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_UTILS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
