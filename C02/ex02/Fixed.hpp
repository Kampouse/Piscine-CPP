/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:13:48 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/21 12:18:56 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int _FixedPointNumber;
			static	const int _fraction_point  = 8;
			/*private members*/
	public:
		Fixed(void);
		Fixed(int const number);
		Fixed(float const  number);
		~Fixed(void);
		Fixed(const Fixed &copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
		Fixed	&operator =(const Fixed &copy);
		Fixed	operator+(const Fixed  &append );
		Fixed	operator-(const Fixed &append );
		Fixed	operator*(const Fixed &append);
		Fixed	operator/(const Fixed &append);
		Fixed	operator++(int);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		bool	operator>(const Fixed &append )const ;
		bool	operator<(const Fixed &append) const ;
		bool	operator>=(const Fixed &append) const ;
		bool	operator<=(const Fixed &append) const ;
		bool	operator==(const Fixed &append) const ;
		bool	operator!=(const Fixed &append) const ;
static		Fixed	&min( Fixed &first,  Fixed &seond);
static		Fixed	&max( Fixed &first,  Fixed &seond);

static	const	Fixed	&min(  Fixed const  &first,  const Fixed &seond);
static  const	Fixed	&max(  Fixed const  &first,  const Fixed &seond);


};

/* allow to  output  with std::cout <<									*/
std::ostream &operator<<(std::ostream &output, Fixed const &FixedPoint);
#endif
