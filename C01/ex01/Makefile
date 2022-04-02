NAME = ZombieHorde

FLAGS = -Wall -Wextra -Werror --std=c++98 -g

SRCS = main.cpp Zombie.cpp  ZombieHorde.cpp
RM =  rm -rf 
.cpp.o:
	@g++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = g++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	
run: all
	./brainz
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
