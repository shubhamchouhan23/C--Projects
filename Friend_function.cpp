/*program to perform operations using friend function*/

#include<iostream>
using namespace std;

class A;
class B;

class A			//class A defination
{
	public:
		int n1 = 10;
		friend void newFunc(A, B);		//declaring  newFunc() as friend to class A
		
		void funA1()
		{
			cout << "This is public function of class A" << endl;
			
		}
		
	private:
		int n2=20;
		
		void funA2()
		{
			cout << "This is private function of class A" << endl;
			
		}
		
	protected :
		int n3=39;
		
		void funA3()
		{
			cout << "This is protected function of class A" << endl;
			
		}

}; //end of class A


class B			//class B defination
{
	public:
		int n4 = 17;
		friend void newFunc(A, B);		//declaring  newFunc() as friend to class B
		
		void funB1()
		{
			cout << "This is public function of class B " << endl;
		}
		
	private:
		int n5 = 19;
		
		void funB2()
		{
			cout << "This is private function of class B " << endl;
		}
		
	protected :
		int n6 = 21;
		void funB3()
		{
			cout << "This is protected function of class B " << endl;
		}
				
		
};	//end of class B

	
void newFunc(A obj1, B obj2)			//friend function defination
	{
		cout << "This is friend function" << endl;
		
		cout << obj1.n1 << endl;
		obj1.funA1();
		cout << obj1.n2 << endl;
		obj1.funA2();
		cout << obj1.n3 << endl;
		obj1.funA3();
		
		cout << obj2.n4 << endl;
		obj2.funB1();
		cout << obj2.n5 << endl;
		obj2.funB2();
		cout << obj2.n6 << endl;
		obj2.funB3();
		
}
	
		
int main()
{
//object declaration
	B obj2;
	A obj1;
	
//calling friend function
	newFunc(obj1, obj2);
	
return 0;
}
