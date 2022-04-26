NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror --std=c++98  -g  
SRCS =  Bureaucrat.cpp main.cpp  Form.cpp RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp PresidentPardonForm.cpp

RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	
NUMBERS = 1 2 3 4 5 6 7 8 9 10 11 12
run: all
	@$(foreach var,$(NUMBERS),./$(NAME) $(var); echo $(var) "--------------------------------------------------------";)

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

