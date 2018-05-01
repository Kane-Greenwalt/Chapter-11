//Intermediate25.cpp - displays the number of days
//corresponding to the month number entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{

	int monthNumber[13] {31, 28, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31};


	do{
		//display number of days
		cout << "Enter the month number (-1 to stop): " << endl;
		cin >> monthNumber;
		if (monthNumber > 0 && monthNumber < 13)
			cout << "Number of days: " << [monthNumber 1] << endl;
		else
			cout << "Invalid month number" << endl;
	} while (monthNumber != 1);

		system("pause");
		return 0;
}