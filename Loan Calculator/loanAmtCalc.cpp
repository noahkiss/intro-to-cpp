#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double amt, apr;
	int years;

	cout << "Enter investment amt: ";
	cin >> amt;
	cout << "Enter APR: ";
	cin >> apr;
	cout << "Enter years: ";
	cin >> years;

	cout << "Accumulated value is ";
	cout << amt * pow((1 + apr / 1200.0), years * 12) << endl;

	return 0;
}