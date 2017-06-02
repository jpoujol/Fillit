NAME = fillit

PATH_SRC = ./

PATH_LIBFT = ./libft

SRC = $(PATH_SRC)parseur.c $(PATH_SRC)ft_changeLetter.c \
		$(PATH_SRC)ft_clearLastTetri.c $(PATH_SRC)ft_diff.c \
		$(PATH_SRC)ft_foundPosition.c $(PATH_SRC)ft_freeMap.c
		$(PATH_SRC)ft_initStruct.c $(PATH_SRC)ft_isFree.c \
		$(PATH_SRC)ft_mallocTetri.c $(PATH_SRC)ft_mallocInt.c \
		$(PATH_SRC)ft_newMap.c $(PATH_SRC)ft_printMap.c \
		$(PATH_SRC)ft_readFile.c $(PATH_SRC)ft_replaceTetri.c \
		$(PATH_SRC)ft_solveFillit.c $(PATH_SRC)ft_tabTravel.c \
		$(PATH_LIBFT)libft.a

OBJ = $(SRC:.c=.o)

HEADER_DIR = -I ./fillit.h

FLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRC) $(HEADER_DIR)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
