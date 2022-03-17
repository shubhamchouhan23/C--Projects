//program showing type conversion
//goal: conv Time type to basic type

#include<iostream>
using namespace std;

class Time;
int time_to_basic(Time);

class Time
{
	public:
	int h,m;
	
		Time()		//def constructor
		{
			cout << "Inside default constructor" << endl;
		}
	
		/*Time(int x)		//param constructor
		{
			cout << "Inside param constructor" << endl;
			h = x/60;
			m = x%60;
		}
		*/
		
		void operator int()		//overloaded operator
		{
			cout << "inside overloaded operator\n";
			h = x/60;
			m = x%60;
		} 
		
		friend int time_to_basic(Time tm);		//friend function declaration
		
		void display()
		{
			cout << "time is: " << h << "hr " << m << "min" << endl; 
		}
		
	}; //end of class
	
	int time_to_basic(Time tm)		//function to convert Time to basic type
	{
		int min;
		min = tm.h*60 + tm.m;
		
		return min;
	}
	
	int main()
	{
		int j=128;
		Time t1 = j;
		
		t1.display();
		
		int min = time_to_basic(t1);	//passing t2 for conversion into friend function
				
		cout << "Time in minutes is: " << min << endl;
		
		return 0;
	}
