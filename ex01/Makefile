SRC = contact.cpp main.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)
INC = contact.hpp phonebook.hpp
NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re