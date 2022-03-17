//op overloading of unary operator
#include<iostream>
using namespace std;

class complex{
	
	int r, i;
	
	public:
	//default constructor
	complex()
	{
	r=0;
	i=0;
	}
	
	//param constructor
	complex(int x, int y)
	{
		r=x;
		i=y;
	}

	complex operator - ();			//unary '-' overloading declaration
	complex operator ++ ();			//unary '++' prefix overloading declaration
	complex operator -- ();			//unary '--' prefix overloading declaration
	
	complex operator --(int);		//unary '--' postfix overloading declaration
	complex operator ++(int);		//unary '++'postfix overloading declaration
			
	void display()
	{
		cout << "Real part: " << r << " complex part: " << i << endl;
	}
	
};	//end of class complex

complex complex :: operator ++ ()			//unary ++prefix overloading defination
	{
		complex temp;
		temp.r = ++r;
		temp.i = ++i;
		
		return temp;
	}
	
complex complex :: operator --()			//unary --prefix overloading defination
	{
		complex temp;
		temp.r = --r;
		temp.i = --i;
		
		return temp;
		
	}
	
complex complex :: operator - ()			//unary '-' overloading defination
	{
		complex temp;
		temp.r = -r;
		temp.i = -i;
		
		return temp;
		
	}
	
complex complex :: operator ++ (int)			//unary ++postfix overloading defination
	{
		complex temp;
		temp.r = r++;
		temp.i = i++;
		
		return temp;
	}
	
complex complex :: operator --(int)			//unary --postfix overloading defination
	{
		complex temp;
		temp.r = r--;
		temp.i = i--;
		
		return temp;
		
	}
	
int main()
{
	complex c1(5,6), c2(4,5), c3;			//object initilized
	
	//using overloaded operators
	
	cout << "original values" << endl << endl;
	c1.display();
	c2.display();
	
	cout << "\nnegation op" << endl << endl;
	c3 = -c1;
	c3 = -c2;
	
	c3.display();
	
	cout << "\nprefix op" << endl << endl;
	c3 = ++c1;
	c3.display();
	c3 = --c2;
	c3.display();
	
	cout << "\npostfix op" << endl << endl;
	c3 = c1++;
	c3.display();
	c3 = c2--;
	c3.display();
	
	cout << "\nfinal values" << endl << endl;
	c1.display();
	c2.display();

	return 0;
}
