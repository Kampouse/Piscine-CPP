#include "iostream"
#include "algorithm"
#include "vector"
#include "easyfind.hpp"

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	int *array = new int[10]; 
	std::vector <int> vec = std::vector<int>(10,0);

	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
		std::cout << array[i] << std::endl;			
	}

	std::vector <int> v(array, array + 10); 
	try
	{
		easyfind<std::vector<int>, int>(v,4);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		easyfind<std::vector<int>, int>(vec,4);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cerr << "sorry i was too drunk to catch the exception" << std::endl;
	}
	delete [] array;
}
