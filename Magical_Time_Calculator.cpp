#include <iostream>
#include <string>
using namespace std;
//declare functions
int MagicalTimeCalculator(int firstHour, int firstMinute, bool firstIsAM, int secondHour, int secondMinute, bool secondIsAM);
//Returns the difference, in minutes, between the first time and the second time. The second time is assumed to be in the future, regardless of its value. The boolean values are true if the time is in the AM, and false if they are in the PM.
//main
int main()
{
	//initialize variables
	char prompt, first1, first2, second1, second2;
	int firstHour, firstMinute, secondHour, secondMinute;
	//greet user
	cout << "What is a 24 hour clock, anyway? This program will take your inputs of time in 12-hour format, and determine what to input into your time machine!\n";
	//begin program loop
	do
	{
		//receive input
		cout << "Enter the start time in the following format example: 11 29 AM\n";
		cin >> firstHour >> firstMinute >> first1 >> first2;
		cout << "Enter the future time in the same format. example: 12 34 PM\n";
		cin >> secondHour >> secondMinute >> second1 >> second2;
		//determine whether times are AM or PM
		bool firstIsAM = (first1 == 'A' || first1 == 'a');
		bool secondIsAM = (second1 == 'A' || second1 == 'a');
		//output results
		cout << "Enter " << MagicalTimeCalculator(firstHour, firstMinute, firstIsAM, secondHour, secondMinute, secondIsAM) << " minutes into your time travel machine, to travel to\n"
			/* << secondHour << ":" << secondMinute << " " << second1 << second2 <<*/ "the future. If you wanted to leave immediately, make sure to account for the time you spent using this program!\n";
		//prompt to continue
		cout << "Would you like to continue? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	cout << "Goodbye!\n";
	return 0;
}

//define functions
int TimeConversion(int hour, bool isAM) //magical function so i dont have to repeat myself multiple times in my magical time calculator
{
	if (isAM && hour < 12) //for AM
		return hour * 60;
	else if (isAM && hour == 12) //for 12AM
		return 24 * 60;
	else if (hour < 12) //for PM
		return (hour + 12) * 60;
	else //if (hour == 12) for 12PM
		return hour * 60;

}

int MagicalTimeCalculator(int firstHour, int firstMinute, bool firstIsAM, int secondHour, int secondMinute, bool secondIsAM)
{
	int firstTotal = TimeConversion(firstHour, firstIsAM) + firstMinute, secondTotal = TimeConversion(secondHour, secondIsAM) + secondMinute;
	if (firstTotal < secondTotal)
		return secondTotal - firstTotal;
	else //if (secondTotal >= firstTotal)
		return (secondTotal + 1440) - firstTotal;
}