CC = c++
NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

SRCS = Contact.cpp PhoneBook.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run	