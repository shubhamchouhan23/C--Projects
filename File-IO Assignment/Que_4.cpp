//program to count no. of words ending with 's'

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream input;
	string str;
	int count=0;
	
	
	input.open("file.txt");		//open the file

	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> str)		//read a char from file and save it to 'str'
		{
			int n = str.length();			//getting length of string
			
			if(str[n-1] == 's' || str[n-1] == 'S')			//checking if last char is 's' or not
			{
				count++;			//count no. of words
			}			
		}
		
		cout << "Total no. of words ending with 's' --> " << count << endl;
		
		
	}
	
	input.close();			//close the file
	
	return 0;
}
