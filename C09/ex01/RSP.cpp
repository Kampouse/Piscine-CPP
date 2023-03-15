#include "RPS.hpp"



RPN::RPN(void):_size(0) {

}

RPN::RPN(RPN const & copy) {

  *this = copy;


}


RPN::~RPN(void) {

}

RPN &	RPN::operator=( RPN const & copy )
{
	if (this != &copy)
	{
		this->_stack = copy._stack;
                this->_size = copy._size;
	}
	return (*this);
}


void RPN::push(int value) {

  this->_stack.push(value);
  this->_size++;
}


void RPN::add(void) {
  int first;
  int second;
  if(this->_size < 2) {
      throw OutStack();
  }
   first = _stack.top();
  _stack.pop();

  std::cout << this->_size << std::endl;
  if(this->_stack.empty()) {
      throw OutStack();
  }
  second = _stack.top();
  _stack.pop();
  this->push(first + second);
  this->_size--;
}
void RPN::substract(void) {
  int first;
  int second;
  if(this->_size < 2) {
      throw OutStack();
  }
   first = _stack.top();
  _stack.pop();
  if(this->_stack.empty()) {
      throw OutStack();
  }

  second = _stack.top();
  _stack.pop();
  this->push(second - first);
  this->_size--;
}

void RPN::multiply(void) {
  int first;
  int second;
  if(this->_size < 2) {
      throw OutStack();
  }

   first = _stack.top();
  _stack.pop();
  if(this->_stack.empty()) {
      throw OutStack();
  }
  second = _stack.top();
  _stack.pop();
  this->push(first * second);
  this->_size--;
}

void RPN::divide(void) {
  int first;
  int second;
  if(this->_size < 2) {
      throw OutStack();
  }
   first = _stack.top();
  _stack.pop();
  if(this->_stack.empty()) {
      throw OutStack();
  }
  second = _stack.top();
  _stack.pop();
    if(second == 0 || first == 0 )
	throw DivisionByZero();
  this->push(first / second);
   
  std::cout <<   first / second << std::endl;
  this->_size--;
}

std::stack<int>&     RPN::getStack( void ) { return _stack; }
