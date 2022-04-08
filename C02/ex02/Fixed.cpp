#include "Fixed.hpp"


 const int Fixed::_fraction_point= 8;

Fixed::Fixed(void)
{
	std::cout << "default constructor called" << std::endl;
	 setRawBits(0);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_FixedPointNumber);
}
void Fixed::setRawBits(int const raw)
{
	_FixedPointNumber = raw;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointNumber = number << Fixed::_fraction_point;
}


Fixed::Fixed(float const number)
{
	std::cout << "float constructor called" << std::endl;
	this->_FixedPointNumber = roundf(number  * ( 1 << Fixed::_fraction_point));

}

Fixed::Fixed(const Fixed &copy)
{

	std::cout << "copy constructor called" << std::endl;

	this->setRawBits(copy.getRawBits());	
}
int Fixed::toInt(void)const
{
	return (this->_FixedPointNumber >> _fraction_point);
}

float Fixed::toFloat(void)const
{
	return ( this->_FixedPointNumber  / (float)(1 << this->_fraction_point));
}

Fixed	&Fixed::operator = (const Fixed &copy)
{
	this->_FixedPointNumber = copy.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &append )
{
	Fixed output;

	output.setRawBits(this->getRawBits() +append.getRawBits());	
	return (output);
}

	Fixed	Fixed::operator-( const Fixed &append )
{
	Fixed output;
	output.setRawBits(this->getRawBits() - append.getRawBits());	
	return(output);
}

Fixed	Fixed::operator*(const Fixed &append)
{
	Fixed output;

	output.setRawBits(this->getRawBits()  * append.getRawBits() >> this->_fraction_point);	
	return (output);
}


Fixed	Fixed::operator/(const Fixed &append)
{
	Fixed output;

	output.setRawBits((this->_FixedPointNumber << this->_fraction_point) / append.getRawBits());
	return (output);
}

	Fixed	&Fixed::operator++(void)
{
	this->_FixedPointNumber++;
	return(*this);
}

	Fixed	Fixed::operator++(int)
{
		Fixed temp(*this);
		operator++();
	return (temp);
}
	
	Fixed	&Fixed::operator--(void)
{
	
	this->_FixedPointNumber--;
	return(*this);
}

	Fixed	Fixed::operator--(int)
{
		Fixed temp(*this);
		operator--();
	return (temp);
}

bool	Fixed::operator>(const Fixed &append ) const
{
		return(this->_FixedPointNumber > append.getRawBits());	
}

bool	Fixed::operator<(const Fixed &append) const 
{

		return(this->_FixedPointNumber < append.getRawBits());	
}

bool	Fixed::operator>=(const Fixed &append) const
{

		return(this->_FixedPointNumber >= append.getRawBits());	
}

bool	Fixed::operator<=(const Fixed &append) const 
{

		return(this->_FixedPointNumber <=append.getRawBits());	
}

bool	Fixed::operator==(const Fixed &append) const 
{

		return(this->_FixedPointNumber == append.getRawBits());	
}

bool	Fixed::operator!=(const Fixed &append) const 
{
		return(this->_FixedPointNumber != append.getRawBits());	
}

Fixed	&max( Fixed &first,  Fixed &second)
{
				if(first > second)
					return(first);
				else
					return(second);
}

Fixed	&min( Fixed &first,  Fixed &second)
{
				if(first < second)
					return(first);
				else
					return(second);
}



const Fixed	&max( const  Fixed &first,const Fixed &second) 
{
				if(first > second)
					return(first);
				else
					return(second);
}

const Fixed	&min(  const Fixed &first, const    Fixed &second)
{
				if(first < second)
					return(first);
				else
					return(second);
}




std::ostream &operator<<(std::ostream &output, Fixed const &FixedPoint)
{
	output << FixedPoint.toFloat();
	return (output);
}

