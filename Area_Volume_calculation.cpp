/*program to calculate area & volume of cuboid*/

#include<iostream>
using namespace std;

class Measure{								//class defination
	public:
		int l,w,h;
		
		void setInput(int a, int b, int c)		//function to set value to class variables
		{
			l = a;
			w = b;
			h = c;		
		}
		
		int area()			//function to calculate area
		{
			return l*w;
		}
		
		int volume()			//function to calculate area
		{
			return area()*h;
		}

}; //end of class


int main()
{
	Measure fig1, fig2;			//object defination
	int L,W,H;
	
	cout << "Enter the dimensions (L W H) of figure 1" << endl;
	cin >> L >> W >> H;
	
	fig1.setInput(L,W,H);
	
	cout << "Enter the dimensions (L W H) of figure 2" << endl;
	cin >> L >> W >> H;
	
	fig2.setInput(L,W,H);
	
	cout << "Area of figure 1 : " << fig1.area() << endl;
	cout << "Volume of figure 1 : " << fig1.volume() << endl;
	
	cout << "Area of figure 2 : " << fig2.area() << endl;
	cout << "Volume of figure 2 : " << fig2.volume() << endl;

	return 0;
}
