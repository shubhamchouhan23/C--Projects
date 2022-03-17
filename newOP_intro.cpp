#include<iostream>
using namespace std;

int main()
{
	float *pt = new float;
	*pt = 55;
	cout << "value= " << *pt;
	cout << "\naddress= " << pt;
	cout << "\nsize= " << sizeof(*pt);
	cout << "\nadd of ptr= " << &pt;
	cout << "\nsize of pt= " << sizeof pt;
	
	return 0;
}
