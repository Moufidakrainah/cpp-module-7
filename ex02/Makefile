
NAME = array
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC) Array.hpp Array.tpp
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
