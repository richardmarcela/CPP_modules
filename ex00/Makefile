CC = c++
NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

SRCS = megaphone.cpp

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