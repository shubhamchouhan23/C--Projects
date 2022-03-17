/*Program to perform basic mathematical operations*/

#include<iostream>
using namespace std;

class Calculator{				//defining class calculator
	public:
		int n1, n2;
		
		void setInput(int a, int b)
		{
			n1 = a;
			n2 = b;
		}

			
		int add(Calculator obj1, Calculator obj2)		//to perform add operation 
		{
			return obj1.n1 + obj2.n1;
		}
		
		int subtract()				//to perform subtraction operation 
		{
			return n1-n2;
		}
		
		int multiply()				//to perform multiplication operation 
		{
			return n1*n2;
		}
		
		float divide()				//to perform division operation 
		{
			return n1/n2;
		}
		
		int modulo()				//to perform modulo operation 
		{
			return n1%n2;
		}

}; //end of class



int main()
{
	Calculator obj1, obj2;
	char opt;
	int num1,num2;
	
	cout << "Which operation you want to perform\nA - Add\nS - Subtract\nM - Multiply\nD - Divide\nR - modulo\n";			//printing menu of operations
	cin >> opt; 		//getting user choice
	
	cout << "Enter 2 numbers\n";
	cin >> num1 >> num2;
	
	obj1.setInput(num1,num2);
	obj2.setInput(45,30);
	
	switch(opt)				//switch case for operations
	{
		case 'A':
		cout << "The Sum is: " << obj1.add(obj1, obj2);
		break;
		
		case 'S':
		cout << "The difference is: " << obj1.subtract();
		break;
		
		case 'M':
		cout << "The product is: " << obj1.multiply() << endl;
		break;
		
		case 'D':
		cout << "The division is: " << obj1.divide() << endl;
		break;
		
		case 'R':
		cout << "The modulo is: " << obj1.modulo() << endl;
		break;
	
	}
	
	return 0;
}
