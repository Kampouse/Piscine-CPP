#include "RPS.hpp"
#include <iostream>
#include <stack>
#include <string>
#include <sys/wait.h>

int main(int argc, char **argv) {
  RPN stack;

  if (argc != 2) {
    std::cout << "wrong number of argument" << argc << std::endl;
    return 0;
  }

  std::string stack_str = argv[1];

//reverse polish noation 
for  (size_t i = 0; i < stack_str.length(); i++) {
    if (stack_str[i] == '+') {
      stack.add();
    } else if (stack_str[i] == '-') {
      stack.substract();
    } else if (stack_str[i] == '*') {
      stack.multiply();
    } else if (stack_str[i] == '/') {
      stack.divide();
    }  else if (stack_str[i] == ' ') {
      continue;
    } else {
      stack.push(stack_str[i] - '0');
    }
  }
 std::cout <<  stack.getStack().top() << std::endl;
  return 0;



}