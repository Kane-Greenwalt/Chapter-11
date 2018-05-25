//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <Kane Greenwalt> on <05/24/18>

#include <iostream>
using namespace std;

int main()
{
	int choice;
	int searchScore = 0;
	int total = 0;
	int scores[20] = { 58, 62, 76, 65, 43, 78, 82, 80, 81, 90, 92, 100, 34, 23, 17, 78, 93, 35, 56, 60 };
retry:
	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;

		for (int x = 0; x < 20; x += 1)
		{
			if (scores[x] == searchScore)
			{
				total += 1;
				cout << "Number of students earning a score of " << searchScore << ": " << total << endl << endl;
			}

		}

		cout << " The number you entered no student scored, would you like to try again? \n 1 for yes \n 2 for no " << endl;
		cin >> choice;
		if (choice == 1)
		{
			goto retry;
		}
	}

	system("pause");
	return 0;
}
