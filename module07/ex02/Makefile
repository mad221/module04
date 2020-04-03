SRC = main.cpp

OBJ = $(SRC:.c=.o)

NAME = template

CC = clang++ -Wall -Werror -Wextra

ALL : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(SRC) -o $(NAME)
clean:
	rm $(OBJ)

fclean: clean
		rm $(NAME)
	
re : clean all