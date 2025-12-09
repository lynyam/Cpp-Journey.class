NAME    = animal

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -Wshadow -std=c++98

SRCS    = main.cpp \
		  Animal.cpp \
		  Cat.cpp \
		  Dog.cpp \
		  WrongAnimal.cpp \
		  WrongCat.cpp \
		  Brain.cpp

OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

