#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	system("chcp 1251>nul");

	int n = 10, s = 0, k = 1;
	
	while (k<=n) {
		s = s + k * k;
		k++;
	}

	cout << "sum of squares from 1 to " << n << ": " << s << endl;

	return 0;
}