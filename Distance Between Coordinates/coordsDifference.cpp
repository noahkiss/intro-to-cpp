#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double points[4];

	cout << "Please enter x1, y1, x2, y2" << endl;

	for (int i = 0; i < 4; i++) {
		cout << "Enter next value: ";
		cin >> points[i];
	}

	cout << "The difference between the two points is ";
	cout << pow(pow((points[2] - points[0]), 2) + pow((points[3] - points[1]), 2), 0.5) << endl;

	return 0;
}