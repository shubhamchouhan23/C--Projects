//program showing operations on 'new & delete operators'
#include<iostream>
using namespace std;

class C
{
	public:
	int i,j,k;
	
	C()
	{
		i=1,j=2,k=3;
	}
	
};

void display(int *pt)
{
	cout << "value= " << *pt;
	//cout << "\naddress= " << pt;
	cout << "\nsize= " << sizeof(*pt);
	//cout << "\nadd of ptr= " << &pt;
	cout << "\nsize of pt= " << sizeof pt << endl;
}

int main()
{
	C *c1, *c2;
	int *arr;
	
	int *pt = new int;
		
	c1 = new C; 
	c2 = new C [3];
	
	arr = new int [5];
	*pt = 55;
	
	cout << "values of pt" << endl;
	display(pt);

	cout << "\nvalues of c1" << endl;
	cout << "value= " << c1->i << c1->j << c1->k << endl;
	cout << "size= " << sizeof(c1) << endl;
	
	cout << "\nvalues of c2" << endl;
	cout << "value= " << c2->i << c2->j << c2->k << endl;
	cout << "size= " << sizeof(c1) << endl;
	
	cout << "\nvalues of arr" << endl;
	display(arr);
	
	delete pt;
	delete arr;
	delete [] c2;
	delete c1;
	
	display(pt);
	return 0;
}
