#pragma once

#include "iostream"
#include "stack"

class RPN {

public:
  RPN(void);
  RPN(RPN const &copy);
  ~RPN(void);
  RPN &operator=(RPN const &copy);

  class OutStack : public std::exception {
    virtual const char *what(void) const throw() {
      return "Error invalid operator";
    }
  };

  class DivisionByZero : public std::exception {
    virtual const char *what(void) const throw() {
      return "Error cannot divide by zero";
    }
  };
  void push(int n);
  void add(void);
  void substract(void);
  void divide(void);
  void multiply(void);
  std::stack<int>& getStack(void);

  private: 
    std::stack<int> _stack;
    size_t _size;

};
