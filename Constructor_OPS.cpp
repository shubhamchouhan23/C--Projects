/*performing operations on different constructors*/

#include<iostream>
using namespace std;

class car{				//class defination
	public:
		int p, x, y;
	
		void num()
		{
			p=29;
			cout << "In function num " << p << endl;
		}
		
		car()		//default constructor
		{
			p=2090;
			cout << "In default constructor car " << p << endl;
		}


		car(int x, int y) //param constructor
		{
			p = x+y;
			cout << "In param constructor car " << p << endl;
		}
		
		car(car &obj) 	//copy constructor
		{
			x = obj.x;
			y = obj.y;
			cout << "Inside copy constructor car " << obj.x << " " << obj.y << endl;
		}
	};

int main()
{
car c1;
c1.x = 15;
c1.y = 22;

car c2(c1);		//calling copy constructor

cout << "original " << c1.x << " " << c1.y << " " << endl;

cout << "copied " << c2.x << " " << c2.y << " " << endl;

return 0;
}
