#include "stdafx.h" 
#include<iostream> 
using namespace std;

int main()
{
	while (true)
	{

		string key = "";
		cout << "Enter key: ";
		cin >> key;

		char num = key.at(1);
		key = toupper(key.at(0));

		string major[3] = { "Mathematics", "Computer Science", "Information Technology" };
		string year[4] = { "Freshman", "Sophomore", "Junior", "Senior" };

		if ((int)num >= 49 && (int)num <= 52)
		{
			if (key == "M")
			{
				cout << major[0] << " " << year[((int)num - 49)] << endl;
				break;
			}
			if (key == "C")
			{
				cout << major[1] << " " << year[((int)num - 49)] << endl;
				break;
			}
			if (key == "I")
			{
				cout << major[2] << " " << year[((int)num - 49)] << endl;
				break;
			}
		}
		cout << "Please try again. ";
	}

	return 0;
}