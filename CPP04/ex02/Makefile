CC = c++
NAME = brainnn
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -I./includes
RM = rm -rf

SRCS = src/Animal.cpp src/Dog.cpp src/Cat.cpp src/main.cpp src/WrongAnimal.cpp \
		src/WrongCat.cpp src/Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	clear

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run