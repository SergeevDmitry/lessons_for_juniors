#include "pch.h"
#include <iostream>

using namespace std;

#include <conio.h> // for getche
int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r') {
		cout << "\nYour coordinates: " << x << ", " << y;
		cout << "\nChoose your direction (n,s,e,w): ";
		dir = _getch();
		switch (dir) {
		case 'n': y--; break;
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		case '\r': cout << "Exit...\n"; break;
		default: cout << "Choose another\n";
		}
	}
	return 0;
}
