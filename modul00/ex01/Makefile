SRC = annuary.cpp main.cpp

CPP = clang++ -Wall -Werror -Wextra

NAME = annuary

OBJ = $(SRC:.c=.o)

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)


clean:
	rm $(OBJ)

fclean: clean
		rm -rf $(NAME)
	
re : clean all