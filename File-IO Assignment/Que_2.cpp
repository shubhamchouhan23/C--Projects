//program to count no. of words having 'a' in them

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
		//count total no. of words
		
		while(input >> s)		//read a char from file and save it to 's'
		{
			int n = s.length();		//getting length of string
			
			for(int i = 0; i < n;i++)		//checking for the words having 'a' in them
			{
				if(s[i] == 'a' || s[i] == 'A')
				{
					count++;			//count no. of words
					break;
				}
			}
			
		}
		
		cout << "Total no. of words having 'a' --> " << count << endl;
		
		
	}
	
	input.close();			//close the file
	
	return 0;
}
