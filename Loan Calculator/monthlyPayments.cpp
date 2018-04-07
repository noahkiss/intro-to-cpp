#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double apr, amt, monthly, total, interest, principal;
    int years;

    cout << "Loan Amount: ";
    cin >> amt;
    cout << "Number of Years: ";
    cin >> years;
    cout << "Annual Interest Rate: ";
    cin >> apr;

    apr /= 1200;
    years *= 12;

    monthly = amt * apr / (1 - (1 / pow(1 + apr, years)));
    total = monthly * years;

    interest = (amt * apr);
    principal = monthly - interest;

    printf("\n%s%.2f\n", "Monthly Payment: ", monthly);
    printf("%s%.2f\n\n", "Total Payment: ", total);

    printf("%-10s%13s%13s%13s\n", "Payment#", "Interest", "Principal", "Balance");

    for (int i = 1; i <= (years); i++) {
        amt -= principal;
    
        printf("%-10i%10.2f%13.2f%16.2f\n", i, interest, principal, amt);

        interest = amt * apr;
        principal = monthly - interest;
    }

    return 0;
}