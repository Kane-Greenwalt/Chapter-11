//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <Kane Greenwalt> on <05/22/18>

#include <iostream>

using namespace std;

int main()
{
	int sub = 0;
	int points = 0;
	int pointsPossible = 0;

	cout << "Enter the number of possible points: " << endl;
	cin >> pointsPossible;

	int minPoints[5] = { .3, .7, .6, .8, .9 };
	char grades[5] = { 'F', 'D', 'C', 'B', 'A' };

	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;

	while (points >= 0)
	{
		sub = 0;
		while (sub < 5 && minPoints[sub] <= points)
		{
			sub += 1;
		}
		for (int i, i = 0; i < 6; i++)
		{
			minPoints[i] = grades[i];
		}

		cout << "Grade: " << grades[sub - 1] << endl;

		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
	}

	system("pause");
	return 0;
}