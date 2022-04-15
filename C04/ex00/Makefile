NAME = Polymorphism
FLAGS = -Wall -Wextra -Werror --std=c++98 
SRCS =  WrongCat.cpp Cat.cpp Dog.cpp  main.cpp Animal.cpp WrongAnimal.cpp

RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		${CC} ${OBJS} ${FLAGS}   -o ${NAME}
run: all
	./${NAME} hello world
val: all
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME)
clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile
fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git

