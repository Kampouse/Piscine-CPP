#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	static const int fractional_byte = 8;
	private:
			int _FixedPointNumber;
			/*private members*/
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed	&operator = (const Fixed &copy);
};

#endif
