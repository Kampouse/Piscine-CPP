NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror --std=c++98 -g

SRCS = tests.cpp Account.cpp
RM =  rm -rf 
.cpp.o:
	@g++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = g++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	
run: all
	./PhoneBook 
val: all
	valgrind   --track-origins=yes -s --trace-children=yes  ${NAME}

clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile

fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git
