#include "RPS.hpp"
#include <iostream>
#include <stack>
#include <string>
#include <sys/wait.h>

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;
  RPN stack;

  if (argc != 2) {
    std::cout << "wrong number for argument '1 1 +" << argc << std::endl;
    return 0;
  }

  std::string stack_str = argv[1];

  for (size_t i = 0; i < stack_str.size(); i++) {
    if (std::isdigit(stack_str[i])) {
      stack.push(stack_str[i] - '0');
    } else if (stack_str[i] == '-' && stack_str[i + 1] && std::isdigit(stack_str[i + 1])) {
      stack.push(-(stack_str[i + 1] - '0'));
      i++;
    } else {
      try {
        switch (stack_str[i]) {
        case '+':
          stack.add();
          continue;
        case '-':
          stack.substract();
          continue;
        case '*':
          stack.multiply();
          continue;
        case '/':
          stack.divide();
        case ' ':
          continue;
        default:
          if (!std::isdigit(stack_str[i])) {
            std::cerr << "Error: Invalid input provided" << std::endl;
            return 0;
          }
        }
      }
      catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 0;
      }
    }
  }

  if (stack.getStack().size() != 1) {
    std::cout << "Error: number of operator is invalid" << std::endl;
    return 0;
  }
  std::cout << stack.getStack().top() << std::endl;
  return 0;
}
