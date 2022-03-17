/*performing date-time operations using oops*/

#include <iostream>
#include <ctime>
#include<cstdlib>
#include<unistd.h>
using namespace std;

class Time{			//Time class defination
	public:
		int H, M, S;
	
	
		int setTime()			//function to set time in class variables
		{
			time_t now = time(0);
			
	   		tm *ltm = localtime(&now);

			H = ltm->tm_hour;
		   	M = ltm->tm_min;
		   	S = ltm->tm_sec;
		   	
		   	return 0;
		}
		
		Time getTime()				//function to get value of class variables
		{
			Time temp;
			temp.H = H;
			temp.M = M;
			temp.S = S;
			
			return temp;
		}
		
		Time sleepTime(Time obj1, Time obj2)		//function to get time difference
		{
			Time diff;
			diff.H = obj1.H - obj2.H;
			diff.M = obj1.M - obj2.M;
			diff.S = obj1.S - obj2.S;
			
			return diff;
		}

};	//end of class Time

class Date{			//Date class defination
	public:
		int DD, MM, YY;
	
	int setDate()			//function to set date in class variables
	{
		time_t now = time(0);
		tm *ltm = localtime(&now);
	   	
		YY = 1900+ltm->tm_year;
   		MM = 1+ltm->tm_mon;
   		DD = ltm->tm_mday;
   		
   		return 0;
	}
	
	Date getDate()			//function to get value of class variables
	{
		Date temp;
		temp.DD = DD;
		temp.MM = MM;
		temp.YY = YY;
		
		return temp;
	}
	
	Date setDOB(Date dte)		//function to set DOB
	{
		Date dob;
		dob.DD = dte.DD;
		dob.MM = dte.MM;
		dob.YY = dte.YY;
		
		return dob;
	}
	
	Date findAge(Date dob)		//function to find difference b/w dates
	{
		Date now, d2, age;
		d2.setDate();
		now = d2.getDate();
		
		age.DD = now.DD - dob.DD;
		age.MM = now.MM - dob.MM;
		age.YY = now.YY - dob.YY;
		
		return age;
	}
	
};	//end of class Date

void timeOps()			//function performing operations on time
{
	Time obj1;
	Time t1, t2;
      
   
   
   obj1.setTime();
   
   Time temp = obj1.getTime(); 
   
   cout << temp.H << ":" << temp.M << ":" << temp.S << endl;

   
   
   
   t2.setTime();
   Time ts = t2.getTime();
   cout << "Sleep Time " <<ts.H << ":" << ts.M << ":" << ts.S << endl;
   
   sleep(5);
   
   t2.setTime();
   Time tw = t2.getTime();
   cout << "Wakeup Time " << tw.H << ":" << tw.M << ":" << tw.S << endl;
   
   Time td = t2.sleepTime(tw,ts);
   cout << "Time difference " << td.H << ":" << td.M << ":" << td.S << endl;
}

void dateOps()					//function performing operations on date
{
	Date dte;
	dte.setDate();
	Date d = dte.getDate();
	cout << "DD-MM-YYYY -> " << d.DD << "-" << d.MM << "-" << d.YY << endl;
	
	Date dob;
	dob.DD = 29;
	dob.MM = 11;
	dob.YY = 2000;

	Date d1 = dte.setDOB(dob);
	Date age = dte.findAge(d1);
	cout << "Your age is -> " << age.YY << " Years" << age.MM << " Months " << age.DD << " Days " << endl;

}

int main(){
	timeOps();			//calling timeOps func
	dateOps();			//calling dateOps func
	
   return 0;
}
