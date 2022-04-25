NAME = ZombieHorde

FLAGS = -Wall -Wextra -Werror --std=c++98 -g

SRCS = main.cpp Zombie.cpp  ZombieHorde.cpp
RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	
run: all
	./ZombieHorde
val: all
	valgrind   --track-origins=yes -s --trace-children=yes  ./ZombieHorde

clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile

fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git
