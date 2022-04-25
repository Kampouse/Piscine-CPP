#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int _FixedPointNumber;
			static	const int _fraction_point = 8;
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
		Fixed	&operator = (const Fixed &copy);
};
/* allow to  output  with std::cout <<									*/
std::ostream &operator<<(std::ostream &output, Fixed const &FixedPoint);
#endif
