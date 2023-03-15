NAME = RPS

FLAGS = -Wall -Wextra -Werror --std=c++98 -g -fsanitize=address
SRCS = main.cpp  RSP.cpp
RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = g++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}

	
run: all
	./${NAME} "3 4 + "
	./${NAME} "3 -4 + "
	./${NAME} "77 * 7 - "
	./${NAME} "5 0 / "
val: all
	valgrind   --track-origins=yes -s --trace-children=yes  ./${NAME}

clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile

fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git




