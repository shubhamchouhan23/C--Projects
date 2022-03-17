/*initialization of variables using parameterized constructor*/

#include<iostream>
using namespace std;

class Distance					//class defination
{
	public:
		int inch, feet;
		
		void display(Distance obj)				//function to display variables
		{
			cout << "distance" << endl << obj.feet <<  " feet" << endl << obj.inch <<  " inch" << endl;
		}
				
		Distance(int i, int f)			//param constructor
		{
			inch = i;
			feet = f;
		}

};

int main()
{
	Distance obj1(24, 2), obj2(12,1);			//initialize objects
	
	//calling methods of class Distance
	obj1.display(obj1);
	obj2.display(obj2);

	return 0;
}
