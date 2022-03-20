//menu driven program to enter and display user details using fileOps and Exception Handling concepts

#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>


using namespace std;

class student
{

	public:
	
	int id;
	string name, branch, location;

	void getDetails()			//function to get student details from stdin
	{
	
		cout << "Enter id, name, branch, location" << endl;
		
		cout << "id: ";
		cin >> id;
		
		cout << "name: ";
		cin >> name;
		
		cout << "branch: ";
		cin >> branch;
		
		cout << "location: ";
		cin >> location;

	}
	
	void addDetails()			//write the data to file
	{
		fstream file;
		student stud;

		file.open("student_record.txt", ios::app|ios::binary);
		
		stud.getDetails();			//take input student data

		file.write((char *) &stud, sizeof(stud));

		file.close();
		
	}
	
	
	void findStud()			//function to find student
	{
		int sid, count=0;
		fstream file;
		student stud;

		int f = 0;		//flag to indicate if user found or not
		
		cout << "Enter the student id" << endl;
		cin >> sid;

		file.open("student_record.txt", ios::in|ios::binary);

		//count total entries in file
		while(!file.eof())
		{
			file.read((char *) &stud, sizeof(stud));
			count++;
		}
		
		file.close();

		
		//displaying stud details if found
		file.open("student_record.txt", ios::in|ios::binary);

		for(int i = 0; i < count-1; i++)
		{
			file.read((char *) &stud, sizeof(stud));

			if(sid == stud.id)
			{
				cout << "\nstudent id matched\n" << endl;
				cout << "Id number: " << stud.id << endl;
				cout << "Name: " << stud.name << endl;
				cout << "Branch: " << stud.branch << endl;
				cout << "Location: " << stud.location << endl;
				f = 1;
			}
			
		}
		
		if(!f)
			cout << "Student Not Found\n" << endl;
				
		file.close();	
	}

};	//end of class



int main()
{
	
	int count=0;
	char opt;
	int flag = 1;
	student s1;
	
	
	//menu driven operation
	try				//using exception handling
	{
		
		while(flag)
		{
			//displaying menu
			cout << "\nSelect the operation you want to perform : \n1. Enter Student Details\n2. Find Student\n3. Exit" << endl;
	
		
			cin >> opt;
			
			if(isalpha(opt))		//check for aplhabet entry
			{
				throw -1;
			}

			else
			{
				switch(opt)
				{
					case '1':
					s1.addDetails();
					break;
					
					case '2':
					s1.findStud();
					break;
					
					case '3':
					flag = 0;
					break;
					
					default:
					cout << "Invalid Option\nTry Again" << endl;
					break;
				}
			}
		
		
		}
		
		
	}
	
	catch(int a)
		{
			cout << "Not a number\nPlease enter a number only" << endl;
		}
		
	return 0;
}
