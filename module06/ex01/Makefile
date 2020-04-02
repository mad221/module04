SRC = main.cpp

CPP = clang++ -Wall -Werror -Wextra

NAME = serialise

OBJ = $(SRC:.c=.o)

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)


clean:
	rm $(OBJ)

fclean: clean
		rm $(NAME)
	
re : clean all% 