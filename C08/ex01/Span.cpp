/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:11:08 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/08 22:06:51 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include "iterator"
#include "vector"

Span::Span(void) {
  std::cout << "Default Constructor called " << std::endl;
  _vector = std::vector<int>(0);
  _iterator = _vector.begin();
  _size = 0;
}

Span::Span(unsigned int size) {
  std::cout << "Constructor called" << std::endl;
  _size = size;
  _vector = std::vector<int>(size);
  _iterator = _vector.begin();
}

Span::Span(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
  std::cout << "Constructor called" << std::endl;
  _size = end - begin;
  _vector = std::vector<int>(_size);
  _iterator = _vector.begin();
  this->addNumber(begin, end);
}

Span::~Span(void) { std::cout << "Destructor called" << std::endl; }

Span::Span(const Span &copy) {
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Span &Span::operator=(const Span &copy) {
  std::cout << "Assignation operator called" << std::endl;
  this->_vector = copy._vector;
  this->_size = copy._size;
  this->_iterator = copy._iterator;
  return (*this);
}

void Span::display() {
  std::vector<int>::iterator iterator;
  iterator = _vector.begin();
  while (iterator != _vector.end()) {
    std::cout << *iterator << " ";
    iterator++;
  }
  std::cout << std::endl;
}
void Span::addNumber(int nb) {
  if (_iterator < _vector.end()) {
    *_iterator = nb;
    _iterator++;
  } else
    throw OutOfSpanException();
}
void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
  if (std::distance(begin, end) <= std::distance(_iterator, _vector.end()) &&
      std::distance(begin, end) > 0) {
    while (_iterator != _vector.end() && begin != end) {
      *_iterator = *begin;
      _iterator++;
      begin++;
    }
  } else
    throw OutOfSpanException();
}

  std::vector<int> Span::copy_and_sort(Span &vector) 
{
  std::vector <int> output;
  output = vector._vector;
  std::sort(output.begin(), output.end());
  return (output);
}

int Span::shortestSpan() {
  unsigned long max = ULONG_MAX;
  std::vector<int>::iterator iterator;
  if (std::distance(_iterator, _vector.end()) < 2 && _vector.size() < 2)
    throw MoreElementRequired();
	std::vector<int> output = copy_and_sort(*this);
  iterator = output.begin();
  for (iterator = output.begin(); iterator + 1 != output.end();
       iterator++) {
    if (((unsigned long)(*(iterator + 1)) - *iterator) &&
        iterator != iterator + 1) {
      max = ((unsigned long)*(iterator + 1) - *iterator);
    }
  }
  return (max);
}

const char *Span::shortestSpanException::what() const throw() {
  return ("The vector is empty");
}

const char *Span::OutOfSpanException::what() const throw() {
  return ("The vector is full");
}
const char *Span::MoreElementRequired::what() const throw() {
  return ("more than one element is required");
}

unsigned int Span::GetSize() const { return (_size); }

int Span::longestSpan() {
  int max = 0;
  int min = 0;
  if (std::distance(_iterator, _vector.begin()) < 2 && _vector.size() < 2)
    throw MoreElementRequired();
  max = *std::max_element(_vector.begin(), _vector.end());
  min = *std::min_element(_vector.begin(), _vector.end());
  return (max - min);
}
