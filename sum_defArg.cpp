/*sum function using default args */

#include<iostream>
using namespace std;

int sum(int x=2, int y=3, int z=4)			//func defination
{
	return x+y+z;
}

int main()
{
//func calling
	cout << sum() << endl;
	cout << sum(12) << endl;
	cout << sum(23,5) << endl;
	cout << sum(74,36,7) << endl; 
	
	return 0;
}
