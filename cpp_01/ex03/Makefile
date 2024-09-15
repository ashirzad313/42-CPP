CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

NAME = weapon

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all;

.Phony : all clean fclean re
