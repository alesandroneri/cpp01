NAME = Zombie

SRC = src/main.cpp \
	src/Zombie.cpp \
	src/zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

.c.o:
	@$(CXX) $(FLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
