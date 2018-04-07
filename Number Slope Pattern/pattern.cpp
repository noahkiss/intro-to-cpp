#include <iostream>
#include <iomanip>
using namespace std;

void displayPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (n - i); j++) {
            cout << "    ";
        }
        for (int j = i; j > 0; j--) {
            cout << setw(4) << j;
        }
        cout << endl;
    }
}

int sumDigits(int n) {
    int sum = 0;

    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int num;
    bool sum;

    cout << "Enter n: ";
    cin >> num;
    cout << "Sum n? 1 for yes: ";
    cin >> sum;

    if (sum) cout << sumDigits(num);
    else displayPattern(num);

    return 0;
}