/*program to perform ops on default args of functions*/

#include<iostream>
using namespace std;

int cubeVolume(int l=5, int w=6, int h=7)			//function defination
{
	return l*w*h;
}

int main()
{
//func calling

	cout << cubeVolume() << endl;
	cout << cubeVolume(6) << endl;
	cout << cubeVolume(6,7) << endl;
	cout << cubeVolume(4,6,8) << endl; 
	
	return 0;
}
