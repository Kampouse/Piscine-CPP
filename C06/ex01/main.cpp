#include "Data.hpp"

int main(void)
{
	Data random;
	Data  *elem = new Data(25,"john");
	std::cout << "before cast" << std::endl;
	std::cout << elem << std::endl;
	std::cout << *elem << std::endl;

	uintptr_t value = serialize(elem);
	Data *val = deserialize(value);

	std::cout << "after cast" << std::endl;
	std::cout << val << std::endl;
	std::cout << *val << std::endl;

	Data test = Data(*val);
	Data test2 = *val;

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	std::cout << *(deserialize(serialize(&test)));
	delete elem;
}
