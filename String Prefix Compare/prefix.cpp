#include <iostream>
using namespace std;

int length(string& string1, string& string2) {
    int length = 0;
    if (string1.size() > string2.size()) length += string2.size();
    else length += string1.size();

    return length;
}

int main() {
    string s1, s2, similar;
    cout << "Enter first string: " << endl;
    getline(cin, s1);
    cout << "Enter second string: " << endl;
    getline(cin, s2);

    for (int i = 0; i <= length(s1, s2); i++) {
        if (s1[i] == s2[i]) similar += s1[i];
        else break;
    }

    cout << endl << "The common prefix is " << similar;

    return 0;
}