//Intermediate26.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <Kane Greenwalt> on <05/24/18>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	double increase = 0.0, newtotal;
	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	for (int i = 0; i < 11; i++)
	{
		newtotal = increase * prices[i];
		cout << newtotal << endl;
	}


	system("pause");
	return 0;
}	//end of main function