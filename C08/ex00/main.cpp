#include "iostream"
#include "algorithm"
#include "vector"
#include "easyfind.hpp"


int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	int *array = new int[10]; 

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
	cattch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	delete [] array;


}
