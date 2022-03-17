//program using Inline function

#include<iostream>
using namespace std;

inline int cube();		//declaring inline function

int CUBE()			//defining normal function
{
	int a;
	cout << "Enter a number: " << endl;
	cin >> a;
	cout << "Cube of " << a << " is " << a*a*a << endl;
	
	return 0;
}

inline int cube()			//defining INLINE function
{
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	cout << "Cube of " << n << " is " << n*n*n << endl;
	
	return 0;
}

int main()
{
	//function call
	
	cout << "Inside normal function " << endl;
	CUBE();
	
	cout << "Inside inline function " << endl;
	cube();

	return 0;
}
