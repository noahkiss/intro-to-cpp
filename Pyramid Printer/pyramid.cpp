#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int row = 8;
    //cout << "How many rows of numbers? ";
    //cin >> row;
    row--;

    for (int line = 0; line <= row; line++) {
        cout << setw(36 - 4 * line) << 1;

        for (int num = 1; num <= line; num++) {
            cout << setw(4) << pow(2, num);
        }

        for (int num = line - 1; num > 0; num--) {
            cout << setw(4) << pow(2, num);
        }

        if (line) cout << setw(4) << 1;
        cout << endl;
    }

    return 0;
}