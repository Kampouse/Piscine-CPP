#include "Karen.hpp"





Karen::Karen(void)
{

	

}
void Karen::debug(void)
{
	std::cout << "(def karen/debug \"big bop am a bot i say  let over lambda\")\n";
	

}
void Karen::error(void)
{
	std::cout << "(def karen/error \"monad are only monoid  in the familiy of endofunctor\")\n"; 
}

void Karen::warning(void)
{
	std::cout << "(defn  karen/warning [warning] (quote (warning  warning))\n";
}

void Karen::info(void)
{
	std::cout << "(def karen/info   \"survery from the minisitery of   defense require  your attention immediatly for a inspection of your  user inteface\")\n"; 
}




Karen::~Karen(void)
{

}
void Karen::complain(std::string str)
{
ptr_funct_karen ptr[4] = 
{
	&Karen::debug, 
	&Karen::info,
	&Karen::warning, 
	&Karen::error 
};
std::string options [4] = 
{
		"DEBUG", 
		"INFO",
		"WARNING",
		"ERROR",
};

	for(int i = 0; i < 4; i++)
	{
			if(options[i] == str)
			{
				((this)->*ptr[i])();
					break;
			}
	}
}
