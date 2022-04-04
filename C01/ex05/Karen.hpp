#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
#include <unordered_map>
class Karen
{
	private:
		
		/*private members*/
		 void debug( void );
		 void info( void );
		 void warning( void );
		 void error( void); 
	public:

		Karen(void);
		void complain(std::string);
		~Karen(void);
};

typedef void (Karen::*ptr_funct_karen)(void);

#endif
