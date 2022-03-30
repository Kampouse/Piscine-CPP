NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -g --std=c++98
SRCS = PhoneBook.class.cpp Contact.class.cpp main.cpp
RM =  rm -rf 
.c.o:
	@g++ ${FLAGS}  -c $< -o ${<:.c=.o}

OBJS = ${SRCS:.c=.o}
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
	
.PHONY: clean fclean re all
