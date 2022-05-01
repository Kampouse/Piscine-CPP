#include "iter.hpp"




int inc(int nbr)
{
return (nbr + 1);
}

int main(void)
{
	 
int *ray =	new int[10];

int cin;
cin = 0;
while(cin < 10)
	{
		ray[cin] = 2;
		cin++;
	}
		iter(ray,5,generic_inc);	
	std::cout << ray[0];
	delete [] ray;
}
