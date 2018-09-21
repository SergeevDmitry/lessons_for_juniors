#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int speed;
	cout << "\nInput a number 33, 46 or 82: ";
	cin >> speed;
	switch (speed)
	{
	case 33:
		cout << "Good\n";
		break;
	case 46:
		cout << "Bad\n";
		break;
	case 82:
		cout << "Ugly\n";
		break;

	default:
		cout << "Nope\n";
		break;
	}

	return 0;
}
