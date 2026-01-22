
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


test:
	./$(NAME) "0"
	./$(NAME) "42"
	./$(NAME) "-42"
	./$(NAME) "0"
	./$(NAME) "0"
	./$(NAME) "0"
	./$(NAME) "0"
	./$(NAME) "0"
	./$(NAME) "42"
	./$(NAME) "-42"
	./$(NAME) "a"
	./$(NAME) "z"
	./$(NAME) "A"
	./$(NAME) "'r'"
	./$(NAME) "'B'"
	./$(NAME) "' '"
	./$(NAME) "42.0"
	./$(NAME) "42.0f"
	./$(NAME) "-42.2"
	./$(NAME) "42.2f"
	./$(NAME) "nan"
	./$(NAME) "nanf"
	./$(NAME) "+inf"
	./$(NAME) "-inf"
	./$(NAME) "+inff"
	./$(NAME) "-inff"
	./$(NAME) "2147483647" 
	./$(NAME) "-2147483648"  
	./$(NAME) "2147483648"   
	./$(NAME) "-2147483649"
	./$(NAME) ""
	./$(NAME) "42..0"
	./$(NAME) "4.2.2"
	./$(NAME) "--42"
	./$(NAME) "++42"
	./$(NAME) "42.2ff"
	./$(NAME) "f42"
	./$(NAME) "42 42"
	./$(NAME) "42f 42"
	./$(NAME) "-f"
	./$(NAME) "+"
	./$(NAME) "-"
	./$(NAME) "f"
	./$(NAME) "."
	./$(NAME) " "
	./$(NAME) "42f "
	./$(NAME) "42ff"
	./$(NAME) "42fd"
	./$(NAME) "42f d"
	./$(NAME) "42df"
	./$(NAME) " 42f"
	./$(NAME) " 42f "
	./$(NAME) "31"
	./$(NAME) "127"
	./$(NAME) "128"  
	./$(NAME) "0.0f"
	./$(NAME) "-0.0f"
	./$(NAME) "+0.0"
	./$(NAME) "+0.0f"
	./$(NAME) "0."
	./$(NAME) ".0"