NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror --std=c++98  -g  
SRCS =  Bureaucrat.cpp main.cpp  Form.cpp

RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		${CC} ${OBJS} ${FLAGS}   -o ${NAME}
run: all
	 ./$(NAME) 1
	@echo "--------------------------------------------------------"
	 ./$(NAME) 2
	@echo "--------------------------------------------------------"
	 ./$(NAME) 3
	@echo "--------------------------------------------------------"
	 ./$(NAME) 4


clean:

	    ${RM} ${OBJS}	
val:
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 2
git:
		@git add ${SRCS} Makefile
fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git

