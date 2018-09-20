#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251>nul");

	const double kmInMile = 1.609344;
	double distMile, distKm;
	cout << "Input distance in miles: ";
	cin >> distMile;

	distKm = distMile * kmInMile;
	cout << "Distance in km: " << distKm << endl;

	system("pause>nul");
	return 0;
}