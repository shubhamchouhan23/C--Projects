//program showing function overloading

#include<iostream>
using namespace std;

//function declaration
int myFunc(int);
int myFunc(int, int);

int main()
{
	cout << myFunc(70) << endl;
	cout << myFunc(15, 16) << endl;
	
	return 0;
}

//function defination
int myFunc(int i)
{
	return i*i;
}

//performing func overloading

int myFunc(int i, int j)
{
	return i*j;
}
