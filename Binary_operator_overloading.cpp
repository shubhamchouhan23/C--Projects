//op overloading of binary operators

#include<iostream>
using namespace std;

class graph{
	
	public:
	int x, y, z;
	
	//default constructor
	graph()
	{
		x=0;
		y=0;
		z=0;
	}
	
	//param constructor
	graph(int a, int b, int c)
	{
		x=a;
		y=b;
		z=c;
	}

	graph operator + (graph obj)			//add operator overloaded
	{
		graph temp;
		
		temp.x = x + obj.x;
		temp.y = y + obj.y;
		temp.z = z + obj.z;
		
		return temp;
	}
	
	graph operator - (graph obj)		//- operator overloaded
	{
		graph temp;
		
		temp.x = obj.x - x;
		temp.y = obj.y - y;
		temp.z = obj.z - z;
		
		return temp;
	}
	
	graph operator * (graph obj)			//* operator overloaded
	{
		graph temp;
		
		temp.x = x * obj.x;
		temp.y = y * obj.y;
		temp.z = z * obj.z;
		
		return temp;
	}
	
	graph operator / (graph obj)			//division operator overloaded
	{
		graph temp;
		
		temp.x = x / obj.x;
		temp.y = y / obj.y;
		temp.z = z / obj.z;
		
		return temp;
	}
	
	graph operator % (graph obj)			//modulo operator overloaded
	{
		graph temp;
		
		temp.x = x % obj.x;
		temp.y = y % obj.y;
		temp.z = z % obj.z;
		
		return temp;
	}
	
	//declaring friend functions
	friend graph operator >> (graph obj1, int shift);			//right shift operator func
	friend graph operator << (graph obj1, int shift);			//left shift operator func
	friend graph operator & (graph obj1, graph obj2);			//binary AND operator func
	
	//defining display function
	void display()
	{
		cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
	}
	
};	//end of class graph

graph operator >> (graph obj1, int shift)		//right shift operator overloaded
	{
		graph temp;
		
		temp.x = obj1.x >> shift;
		temp.y = obj1.y >> shift;
		temp.z = obj1.z >> shift;
		
		return temp;
	}

graph operator << (graph obj1, int shift)			//left shift operator overloaded
	{
		graph temp;
		
		temp.x = obj1.x << shift;
		temp.y = obj1.y << shift;
		temp.z = obj1.z << shift;
		
		return temp;
	}

graph operator & (graph obj1, graph obj2)			//binary AND operator overloaded
	{
		graph temp;
		
		temp.x = obj1.x & obj2.x;
		temp.y = obj1.y & obj2.y;
		temp.z = obj1.z & obj2.z;
		
		return temp;
	}

int main()
{
	graph c1(5,4,3), c2(7,5,9), c3;			//initializing objects
	
	//using overloaded operators
	
	cout << "Addtion:" << endl;
	c3 = c1 + c2;
	c3.display();
	
	cout << "Subtraction:" << endl;
	c3 = c1 - c2;
	c3.display();
	
	cout << "Product:" << endl;
	c3 = c1 * c2;
	c3.display();
	
	cout << "Division:" << endl;
	c3 = c1 / c2;
	c3.display();
	
	cout << "Modulo:" << endl;
	c3 = c1 % c2;
	c3.display();
	
	cout << "Binary AND:" << endl;
	c3 = c1 & c2;
	c3.display();
	
	cout << "Left Shift:" << endl;
	c3 = c1 << 1;
	c3.display();
	
	cout << "Right Shift:" << endl;
	c3 = c2 >> 1;
	c3.display();
	
return 0;
}
