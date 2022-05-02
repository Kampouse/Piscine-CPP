/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:20:07 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/02 19:21:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
template<class T>
class Array
{
	private:
		T* _array;
		unsigned int _count;
	public:
		Array(void);
		Array(unsigned int count);
		~Array(void);
		Array(const Array &copy);
		int			size(void)const;
		Array<T>	&operator = (const Array &copy);
		T			&operator[] ( unsigned  int index );

  class ArrayExcetpion : public std::exception 
 {
  public:
    virtual const char *what() const throw();
  };
};

template<class T>
Array<T>::Array(void)
{
	_array = new T[0];
	_count = 0;
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
	int temp = 0;
	std::cout << "Copy constructor called" << std::endl;
	this->_array = new T[copy.size()];
	this->_count = copy.size();
	while(temp <  copy.size())
	{
		 this->_array[temp] =  copy._array[temp];
			temp++;
	}
}

template<class T>
Array<T>	&Array<T>::operator = (const Array<T> &copy)
{
	int temp = 0;
	delete []  this->_array;
	this->_array = 	new T[copy.size()] ;
	this->_count = copy.size();
	while(temp <  copy.size())
{
	 this->_array[temp] =  copy._array[temp];
		temp++;
}
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

template<class T>
int 	Array<T>::size(void)const
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
	if( index  > _count) 
		throw ArrayExcetpion();
	return (_array[index]);
}
#endif
