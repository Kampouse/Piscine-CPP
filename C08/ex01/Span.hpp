#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
#include "iostream"
#include "algorithm"
#include "vector"


class Span
{
	private:
		std::vector<int>	_vector;
		unsigned int		_size; 
		std::vector<int>::iterator	_iterator;

	public:
		Span(void);
		~Span(void);
		Span(const Span &copy);
		Span(unsigned int size);
		Span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void addNumber(int n);	
		unsigned int GetSize(void) const;  
		void display(void);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		std::vector<int> copy_and_sort(Span &copy);
		int longestSpan(void);
		Span	&operator = (const Span &copy);
	class shortestSpanException: public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class OutOfSpanException: public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class MoreElementRequired: public std::exception
	{
		public:
		virtual const char *what() const throw();
	};





};
#endif
