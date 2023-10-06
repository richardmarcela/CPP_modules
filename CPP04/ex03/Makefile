CC = c++
NAME = interface
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -I./includes
RM = rm -rf

SRCS = src/AMateria.cpp src/Ice.cpp src/Cure.cpp src/Character.cpp src/main.cpp \
		src/MateriaSource.cpp

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