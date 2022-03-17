//program showing type conversion
//goal: conv basic type to time type
//using constructor
/*
#include<iostream>
using namespace std;
class Time
{
	public:
	int h,m;
	
		Time()		//def constructor
		{
			cout << "Inside default constructor" << endl;
		}
	
		Time(int x)		//param constructor
		{
			cout << "Inside param constructor" << endl;
			h = x/60;
			m = x%60;
		}
		
		void display()
		{
			cout << "time is: " << h << "hr " << m << "min" << endl; 
		}
		
	}; //end of class
	
	
	int main()
	{
		int j=128;
		Time t1 = j;
		
		t1.display();
		
		return 0;
	}
	*/
	
/*--------------------------------------------------------------------------------------*/	
	
//program showing type conversion
//goal: conv basic type to time type
//using casting operator

#include<iostream>
using namespace std;

class Time
{
	public:
	int h,m;
	
		Time()		//def constructor
		{
			cout << "Inside default constructor" << endl;
		}
	
		void operator = (int x)		//overloaded operator
		{
			cout << "inside overloaded operator\n";
			h = x/60;
			m = x%60;
		}
		
		void display()
		{
			cout << "time is: " << h << "hr " << m << "min" << endl; 
		}
		
	}; //end of class
	
	
	int main()
	{
		int j=128;
		Time t1;
		t1=j;
		
		t1.display();
		
		return 0;
	}
