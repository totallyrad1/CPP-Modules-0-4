NAME = megaphone
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : megaphone.cpp
	$(CC) $(CPPFLAGS) megaphone.cpp -o $(NAME)

clean : 
	rm -f $(NAME)

re : clean all

PHONY : all re clean