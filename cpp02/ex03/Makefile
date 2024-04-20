NAME = BSP
SOURCES = Fixed.cpp main.cpp Point.cpp
OBJECTS = $(SOURCES:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp Fixed.hpp Point.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) -o $@ $^

clean : 
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : clean all

PHONY : all re clean