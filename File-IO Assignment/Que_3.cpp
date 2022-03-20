//program to count no. of words starting with 'e'

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream input;
	string s;
	int count=0;
	
	
	input.open("file.txt");		//open the file

	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> s)		//read a char from file and save it to 's'
		{
			if(s[0] == 'e' || s[0] == 'E')			//checking if 1st char is 'e' or not
			{
				count++;			//count no. of words
			}			
		}
		
		cout << "Total no. of words starting with 'e' --> " << count << endl;
		
		
	}
	
	input.close();			//close the file
	
	return 0;
}
