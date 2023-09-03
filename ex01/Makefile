NAME = Animal

FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98
 
HEADER =  ./Brain.hpp ./Animal.hpp ./Cat.hpp ./Dog.hpp ./WrongAnimal.hpp ./WrongCat.hpp 

SRC = ./main.cpp ./Animal.cpp ./Cat.cpp  ./Dog.cpp ./WrongAnimal.cpp ./WrongCat.cpp    ./Brain.cpp


OBJ =  $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJ) 
		$(FLAG) $(FLAGS)  $^ -o $@


%.o : %.cpp ${HEADER} 
	$(FLAG) $(FLAGS)  $< -c -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 