#include "Array.hpp"



using std::cout;
using std::endl;
int main(void)
{
int * a = new int();
cout << *a << endl;;
delete a;

	std::auto_ptr<Array<int> > lst( new Array<int>(20));
	Array<int> &temp = *lst;
	cout <<  lst->operator[](3) << endl;
	cout <<  temp[3] << std::endl;
}
