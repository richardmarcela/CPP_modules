CC = c++
NAME = replace
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -fsanitize=address
RM = rm -rf

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME) test.txt "alo" "testando"

.PHONY: all clean fclean re run	