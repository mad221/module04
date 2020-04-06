SRC = megaphone.cpp

CPP = clang++ -Wall -Werror -Wextra

NAME = megaphone

OBJ = $(SRC:.c=.o)

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)


clean:
	rm -rf megaphone.o

fclean: clean
		rm -rf $(NAME)
	
re : clean all