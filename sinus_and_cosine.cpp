#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Functions:
double myCos(double); // cosine
double mySin(double); // sinus
void show(double); //helper

// Main
int main(){
	// Change console character set
	system("chcp 1251>nul");

	// Pi
	const double pi=3.141592;

	// Sinus calculation:
	show(pi/6);
	show(pi/4);
	show(pi/3);
	show(pi/2);

	// Timeout for console window
	system("pause>null");
	return 0;
}