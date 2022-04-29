#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
	 int data;
	std::string value;
	public:
		Data(void);
		Data(int data,std::string value);
		~Data(void);
		Data(const Data &copy);
		Data	&operator = (const Data &copy);
		std::string getStr (void)const;
		int getVal(void)const;
};

	Data *deserialize( uintptr_t raw);
	uintptr_t  serialize(Data *ptr);
std::ostream &operator<<(std::ostream &output, Data  const &elem);
#endif
