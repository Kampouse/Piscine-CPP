NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror --std=c++98  -g
SRCS =  Bureaucrat.cpp main.cpp 

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
	@echo "--------------------------------------------------------"
	 ./$(NAME) 5
clean:

	    ${RM} ${OBJS}	
test: all
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 1
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 2
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 3
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 4
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) 5
git:
		@git add ${SRCS} Makefile
fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git
