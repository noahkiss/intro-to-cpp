#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	// Print 2d matrixes with 2 loops for each set (5 sets)

	int start = 1; // 1, 2, 4, 8, 16
	int group = 1; // 1, 3, 5, 9, 15 - need 1, 3, 5, 9, 15
	int day = 0;
	char answer;
	for (int i = 2; i <= 6; i++) {
		int pos = start;
		for (int j = 1; j <= 16; j++) {
			cout << pos << " ";
			if (j % start == 0) pos += 1 + group;
			else pos += 1;

			if (j % 4 == 0) cout << endl;

		}

		cout << "Is your birthday in Set " << (i - 1) << "?" << endl;
		cin >> answer;

		if (tolower(answer) == 'y') day += start;

		cout << endl;
		start *= 2;
		group += i;
		if (i == 3) group--;
		if (i == 5) group++;
	}

	cout << "The day is " << day << "!" << endl;

    return 0;
}



//int day = 0, answer;

//cout << "Please answer 1 for yes and 0 for no\nif your birthday is in the following sets.\n\n";

//cout << " 1  3  5  7\n"
//	 << " 9 11 13 15\n"
//	 << "17 19 21 23\n"
//	 << "25 27 29 31\n";
//cin >> answer;

//if (answer == 1) day += 1;

//cout << " 2  3  6  7\n"
//	 << "10 11 14 15\n"
//	 << "18 19 22 23\n"
//	 << "26 27 30 31\n";
//cin >> answer;

//if (answer == 1) day += 2;

//cout << " 4  5  6  7\n"
//	 << "12 13 14 15\n"
//	 << "20 21 22 23\n"
//	 << "28 29 30 31\n";
//cin >> answer;

//if (answer == 1) day += 4;

//cout << " 8  9 10 11\n"
//	 << "12 13 14 15\n"
//	 << "24 25 26 27\n"
//	 << "28 29 30 31\n";
//cin >> answer;

//if (answer == 1) day += 8;

//cout << "16 17 18 19\n"
//	 << "20 21 22 23\n"
//	 << "24 25 26 27\n"
//	 << "28 29 30 31\n";
//cin >> answer;

//if (answer == 1) day += 16;

//cout << "Your birthday is " << day << endl;

//int day = 0;
//for (int i = 0; i < 5; i++) {
//	string set = "";

//	for (int j = 0; j < 4; j++) {
//		string line = "";

//		for (int k = 0; k < 4; k++) {
//			
//			if (k == 4) line += '\n';
//			else line += " ";
//		}
//		set += line;
//	}

//}