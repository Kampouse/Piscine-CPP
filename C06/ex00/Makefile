NAME = Typecasting
FLAGS = -Wall -Wextra -Werror --std=c++98  -g  
SRCS =  main.cpp

RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		${CC} ${OBJS} ${FLAGS}   -o ${NAME}
	
NUMBERS = 1.2f wt 2.3 3 4 5 6 7 8 9 10 11 12 75 42 100 200 24 34 56 12 nan inf -inf 
run: all
	@$(foreach var,$(NUMBERS),./$(NAME) $(var); echo $(var) "--------------------------------------------------------";)
clean:

	    ${RM} ${OBJS}	
val:
	@$(foreach var,$(NUMBERS), 	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME) $(var); echo $(var) "--------------------------------------------------------";)

git:
		@git add ${SRCS} Makefile
fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git

