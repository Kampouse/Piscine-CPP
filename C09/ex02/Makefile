NAME = PmergeMe

FLAGS = -Wall -Wextra -Werror --std=c++98 -g -fsanitize=address
SRCS = main.cpp  PmergeMe.cpp
RM =  rm -rf 
JOT_OUPUT := $(shell jot -r 100 100 1 | tr '\n' ' ')


.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = g++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}

	
jot: 
	@./${NAME}  ${JOT_OUPUT}

run: all
	for i in $$(seq 1 1); do \
	make  jot; \
	done

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

