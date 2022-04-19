#ifndef SHRUBBERRYCREATION_HPP
# define SHRUBBERRYCREATION_HPP

# include <iostream>

class ShrubberryCreation
{
	private:
		/*private members*/
	public:
		ShrubberryCreation(void);
		~ShrubberryCreation(void);
		ShrubberryCreation(const ShrubberryCreation &copy);

		ShrubberryCreation	&operator = (const ShrubberryCreation &copy);
};

#endif
