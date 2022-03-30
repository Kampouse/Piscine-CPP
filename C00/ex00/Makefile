NAME = megaphone

FLAGS = -Wall -Wextra -Werror -g --std=c++98
SRCS = megaphone.cpp 
RM =  rm -rf 
.c.o:
	@g++ ${FLAGS}  -c $< -o ${<:.c=.o}

OBJS = ${SRCS:.c=.o}
CC = g++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	

run: all
	./megaphone 

val: all
	valgrind   --track-origins=yes -s --trace-children=yes  ${NAME}

clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile

fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all
