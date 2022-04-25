#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(std::string);
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator = (const WrongAnimal &copy);
		void MakeSound(void)const;
		std::string getType(void)const;


};
#endif




