NAME =	main

SRC =	main.cpp

all: $(NAME)

$(NAME): $(SRC) 
	c++ -g -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME) -I.

fclean: clean

clean:
	@rm -f phonebook

re: fclean all