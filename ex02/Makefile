# Nom de l'exécutable
NAME = main

# Compilateur et options
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRC = main.cpp

# Règle par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(SRC) Array.hpp Array.tpp
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

# Nettoyage des fichiers objets (pas de fichiers .o ici mais pratique)
clean:
	rm -f $(NAME)

# Nettoyage complet
fclean: clean

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
