
.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	convert
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes -MMD -MP
FILES		= 	$(MAIN)$(EXT)


EXT			=	.cpp
OBJ			=	$(patsubst $(SRC)%$(EXT), $(OBJ_DIR)%.o, $(FILES))

MAIN		= 	$(SRC)main
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC)%.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)