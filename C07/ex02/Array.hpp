#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
template<class T>
class Array
{
	private:
		unsigned int _count;
	public:
		T* _array;
		Array(void);
		Array(unsigned int count);
		~Array(void);
		Array(const Array &copy);
		int			size(void);
		Array<T>	&operator = (const Array &copy);
		T			&operator[] ( unsigned  int index );

  class ArrayExcetpion : public std::exception 
 {
  public:
    virtual const char *what() const throw();
  };





};


//#error make the  _array private;

template<class T>
Array<T>::Array(void)
{
	_array = new T[0];
	std::cout << "Constructor called" << std::endl;
}

template<class T>
Array<T>::Array(unsigned int count)
{
	_array = new T[count];
	_count = count;
}

template<class T>
Array<T>::~Array(void)
{
	std::cout << "Destructor called" << std::endl;
	delete [] _array;
}

template<class T>
Array<T>::Array(const Array &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

template<class T>
Array<T>	&Array<T>::operator = (const Array<T> &copy)
{
	(void)copy;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

template<class T>
int 	Array<T>::size(void)
{
	return (_count);
}
template<class T>
 const char *Array<T>::ArrayExcetpion::what() const throw()
{
	return ("BAD ACCES ARRAY\n");
}

template<class T>
T	&Array<T>::operator[] (unsigned  int index)
{
	std::cout << "Assignation operator called" << std::endl;
	if( index  > _count) 
		throw ArrayExcetpion();
	return (_array[index]);
}
#endif
