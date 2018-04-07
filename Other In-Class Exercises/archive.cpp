#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
    srand(time(0));

//    double radius;
//    const double PI = 3.141592653;
//
//    cout << "enter radius: ";
//    cin >> radius;
//
//    double area = radius * radius * PI;
//
//    cout << "the area is: " << area << endl;
//
//    double miles = 100;
//    const double KILOMETERS_PER_MILE = 1.609;
//    double kilometers = miles * KILOMETERS_PER_MILE;
//
//    cout << kilometers << endl;
//
//    ------------------------
//
//    cout << "The size of int: " << sizeof(int) << " bytes" << endl;
//    cout << "The size of long: " << sizeof(long) << " bytes" << endl;
//    cout << "The size of double: " << sizeof(double) << " bytes" << endl;
//
//    double area = 5.4;
//    cout << "The size of area: " << sizeof(area) << " bytes" << endl;
//
//    int age = 31;
//    cout << "The size of age: " << sizeof(age) << " bytes" << endl;
//
//    ------------------------
//
//    int seconds, minutes, hours, remainingSeconds;
//
//    cout << "enter an integer for seconds: ";
//    cin >> seconds;
//
//    minutes = seconds / 60;
//    hours = minutes / 60;
//    minutes -= (hours*60);
//    remainingSeconds = seconds % 60;
//
//    cout << seconds << " seconds is " << hours << " hours, " << minutes << " minutes and " << remainingSeconds << " seconds " << endl;
//
//    ------------------------
//
//    double amt;
//    int mon;
//
//    cout << "Enter monthly amount: " << endl;
//    cin >> amt;
//    cout << "Enter amount of months saved: " << endl;
//    cin >> mon;
//
//    for (int i = 0; i < mon; i++) {
//    	amt += amt + amt * (.05 / 12);
//    }
//
//    cout << "Savings after " << mon << " months: $" << amt << endl;
//
//    double amt, saved = 0;
//    int mon;
//
//    cout << "Enter monthly amount: ";
//    cin >> amt;
//    cout << "Enter amount of months saved: ";
//    cin >> mon;
//
//    for (int i = 0; i < mon; i++) {
//    	saved += amt;
//    	saved += saved * (0.05 / 12);
//    }
//
//    cout << "\nSavings after " << mon << " months: $" << saved << endl;
//
//    ------------------------
//
//    cout << 197.55 * .06 << endl;
//    cout << "Sales tax is: " << (int)(197.55 * .06 * 100) / 100.0 << endl;
//
//    ------------------------
//
//    double apr, years, amt, monthly, total;
//
//    cout << "Please enter APR: ";
//    cin >> apr;
//
//    cout << "Please enter Loan Amt: ";
//    cin >> amt;
//
//    cout << "Please enter Years: ";
//    cin >> years;
//
//    apr /= 1200;
//
//    monthly = (amt * apr) / (1 - (1 / pow(1 + apr, years * 12)));
//
//    total = monthly * years * 12;
//
//    cout << "Your monthly payment will be $" << (int)(monthly * 100) / 100.0 << " and your total amount will be $" << total << endl;
//
//    ------------------------
//
//    char c;
//
//    cout << "Enter letter: ";
//    cin >> c;
//
//    if ('A' <= c && c <= 'Z') cout << c << " is an uppercase letter" << endl;
//    else if ('a' <= c && c <= 'z') cout << c << " is a lowercase letter" << endl;
//    else if ('0' <= c && c <= '9') cout << c << " is a number" << endl;
//    else cout << "Please try again" << endl;
//
//    ------------------------
//
//    srand(time(0));
//
//    char start, end;
//
//    cout << "Enter start and end char" << endl;
//    cin >> start;
//    cin >> end;
//
//    cout << (char)(start + rand() % (end - start + 1)) << endl;
//
//    ------------------------
//
//     Only outputting 0_ .. wtf
//    string lottery, guess;
//    int digit = rand() % 10;
//    lottery += (char)(digit + '0');
//
//    cout << "Pick 2 digits: ";
//    cin >> guess;
//
//    cout << "The lottery number is " << setfill('0') << setw(2) << lottery << endl;
//
//    if (guess == lottery) cout << "You won. $10k" << endl;
//    else if (guess[1] == lottery[0] && guess[0] == lottery[1]) cout << "Almost. $3k" << endl;
//    else if (lottery[0] == guess[0] || lottery[1] == guess[1] || lottery[0] == guess[1] || lottery[1] == guess[0]) cout << "Kinda. $1k" << endl;
//    else cout << "Sucks to suck" << endl;
//
//
//    ------------------------
//
//    int n1, n2, n3;
//    cin >> n1 >> n2 >> n3;
//
//    string loc = "T:\MIS340\C++\FirstApplication\num.txt";
//
//    ofstream output(loc);
//
//    output << n1 << "\n" << n2 << "\n" << n3;
//
//    output.close();
//
//    ifstream input(loc);
//
//    int n4, n5, n6;
//
//    input >> n4;
//    input >> n5;
//    input >> n6;
//
//    cout << n4 + n5 + n6 << endl;
//
//    input.close();
//
//    ------------------------
//
//    cout << "Enter integer: ";
//    int num;
//    cin >> num;
//
//    if (num % 5 == 0) cout << "HiFive" << endl;
//    if (num % 2 == 0) cout << "HiEven" << endl;
//
//    ------------------------
//
//    float weight, height;
//    int BMI;
//
//    cout << "Enter your weight in lbs and your height in inches.\n";
//    cin >> weight >> height;
//
//    weight *= .453592;
//    height *= .0254;
//
//    BMI = weight / (pow(height, 2));
//
//    if (BMI < 16) cout << "Seriously underweight. " << endl;
//    else if (BMI < 19) cout << "Underweight. " << endl;
//    else if (BMI < 25) cout << "Normal weight. " << endl;
//    else if (BMI < 30) cout << "Overweight. " << endl;
//    else if (BMI < 36) cout << "Seriously overweight. " << endl;
//    else cout << "Gravely overweight. " << endl;
//
//    ------------------------
//
//    int flip = rand() % 2;
//    char guess;
//
//    cout << "Please guess: H (heads) or T (tails): ";
//    cin >> guess;
//
//    guess = tolower(guess);
//
//    cout << flip << endl << endl;
//
//    if (flip == 1) { //heads
//    	cout << "I flipped heads and you guessed ";
//    	if (guess == 'h') cout << "heads! Good job." << endl;
//    	else cout << "tails. Try again." << endl;
//    }
//    else if (guess == 't') cout << "I flipped tails and you guessed tails! Good job." << endl;
//    else cout << "I flipped tails and you guessed heads. Try again." << endl;
//
//    ------------------------
//
//    cout << endl << "Please enter an integer: ";
//    cin >> flip;
//
//    bool divBy5 = flip % 5 == 0, divBy6 = flip % 6 == 0;
//
//    if (divBy5 && divBy6) cout << "Your number is divisible by both 5 and 6." << endl;
//    if (divBy5 || divBy6) cout << "Your number is divisible by either 5 or 6." << endl;
//    if (divBy5 && !divBy6 || !divBy5 && divBy6) cout << "Your number is divisible by either 5 or 6, but not both." << endl;
//
//    ------------------------
//
//    int year;
//    cout << "What year were you born? ";
//    cin >> year;
//
//    year %= 12;
//
//    cout << "\nYou are the year of the ";
//
//    switch (year) {
//    	case 0: cout << "monkey";	break;
//    	case 1: cout << "rooster";	break;
//    	case 2: cout << "dog";		break;
//    	case 3: cout << "pig";		break;
//    	case 4: cout << "rat";		break;
//    	case 5: cout << "ox";		break;
//    	case 6: cout << "tiger";	break;
//    	case 7: cout << "rabbit";	break;
//    	case 8: cout << "dragon";	break;
//    	case 9: cout << "snake";	break;
//    	case 10: cout << "horse";	break;
//    	case 11: cout << "sheep";	break;
//    	default: cout << "Whoops!";
//    }
//
//    cout << "! Wow!" << endl << endl;
//
//    ------------------------
//
//    //string num;
//    int num;
//    cout << "Enter a 3-digit number: ";
//    cin >> num;
//
//    //if (num[0] == num[2]) cout << "Your number, " << num << " is a palindrome!" << endl;
//    //else cout << num << " is not a palindrome." << endl;
//
//    if (num % 10 == num / 100) cout << "Your number, " << num << " is a palindrome!" << endl;
//    else cout << num << " is not a palindrome." << endl;
//
//    ------------------------
//
//    cout << "Rock, paper, scissors? ";
//    string guess;
//    cin >> guess;
//
//    char player = tolower(guess[0]);
//    int c = rand() % 3;
//    char comp;
//
//    switch (c) {
//        case 0: comp = 'r'; break;
//        case 1: comp = 'p'; break;
//        case 2: comp = 's'; break;
//    }
//
//    cout << "You guessed " << guess << ". Computer guessed ";
//
//    switch (comp) {
//        case 'r': cout << "rock." << endl << endl; break;
//        case 'p': cout << "paper." << endl << endl; break;
//        case 's': cout << "scissors." << endl << endl; break;
//    }
//
//    if (comp == player) cout << "Draw." << endl;
//    else if (comp == 'r') {
//        if (player == 'p') cout << "You won!" << endl;
//        else cout << "You lost." << endl;
//    }
//    else if (comp == 'p') {
//        if (player == 's') cout << "You won!" << endl;
//        else cout << "You lost." << endl;
//    }
//    else if (comp == 's') {
//        if (player == 'r') cout << "You won!" << endl;
//        else cout << "You lost." << endl;
//    }
//
//    cout << endl;
//
//    ------------------------
//
//    int i;
//    for (i=1; i <= 30; i++) {
//        cout << i;
//        cout << (i%10==0?'\n':' ');
//        //if (i%10==0) cout << '\n';
//        //else cout << ' ';
//    }
//    cout << "--------------------" << endl;
//    for (i=1; i <= 30; i++) {
//        cout << i;
//        //cout << (i%10==0?'\n':' ');
//        if (i%10==0) cout << '\n';
//        else cout << ' ';
//    }
//    cout << endl;
//
//    ------------------------
//
//    int year, month, day, weekday, century;
//    cout << "Enter the year, month, and day: ";
//    cin >> year >> month >> day;
//
//    year = 1 == month || month == 2 ? year - 1 : year;
//    month = 1 == month || month == 2 ? month + 12 : month;
//
//    century = year / 100;
//    year %= 100;
//
//    weekday = (day + 26 * (month + 1) / 10 + year + year / 4 + century / 4 + 5 * century) % 7;
//
//    switch (weekday) {
//        case 0: cout << "Saturday"; break;
//        case 1: cout << "Sunday"; break;
//        case 2: cout << "Monday"; break;
//        case 3: cout << "Tuesday"; break;
//        case 4: cout << "Wednesday"; break;
//        case 5: cout << "Thursday"; break;
//        case 6: cout << "Friday"; break;
//        default: cout << "Oops!"; break;
//    }
//
//    ------------------------
//
//    char randChar = (char)(rand() % 26 + 'a');
//
//    while (true) {
//        cout << "Enter a letter. ";
//        char playerChar;
//        cin >> playerChar;
//
//        if (playerChar == randChar) { cout << "Congratulations! You matched with the letter " << playerChar << endl; break; }
//        else cout << "Your letter comes" << (playerChar > randChar ? " after " : " before ") << "the chosen letter. Try again" << endl;
//    }
//
//    ------------------------
//
//    double sum = 0;
//
//    for (int i = 1; i <= 100; i++){
//        sum += i/100.0;
//    }
//
//    cout << sum << endl << endl;
//
//    ------------------------
//
//    ifstream input("numbers", ios::in);
//    double sum1 = 0, i;
//
//    while(input >> i) {
//        sum1 += i;
//    }
//
//    cout << sum1;
//
//    ------------------------

// EXAM MARCH 29 -----------------------------------------

// ----------- 5.23 -----------
//
//    double apr = 5.0, years, amt, monthly, total;
//
//    cout << "Please enter Loan Amt: ";
//    cin >> amt;
//    cout << "Please enter Years: ";
//    cin >> years;
//
//    printf("%-15s%15s%15s\n", "Interest Rate", "Monthly Payment", "Total Payment");
//
//    while (apr <= 8.0) {
//        if (5.375 == apr) cout << "...\n";
//        if (5.375 <= apr && apr <= 7.75) ;
//        else {
//            monthly = (amt * (apr / 1200.0)) / (1 - (1 / pow(1 + (apr / 1200.0), years * 12)));
//            total = monthly * years * 12;
//            monthly = (int) (monthly * 100) / 100.0;
//            total = (int) (total * 100) / 100.0;
//
//            printf("%-.3f%s%15.2f%19.2f", apr, "%", monthly, total);
//            cout << endl;
//        }
//        apr += .125;
//    }
//
// ----------- 5.24 -----------



// ----------- 5.25 -----------
//
//    int n = 50000;
//    float sum = 0;
//
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0/i;
//    }
//
//    cout << sum << endl;
//    sum = 0;
//
//    for (int i = n; i >= 1; i--) {
//        sum += 1.0/i;
//    }
//
//    cout << sum << endl;
//
// ----------- 5.26 -----------
//
//    float sum = 0;
//
//    for (int i = 1; i <= 97; i += 2) {
//        sum += i/(i + 2.0);
//    }
//
//    cout << sum << endl;
//
// ----------- 5.27 -----------



// ----------- 5.28 -----------



// ----------- 5.29 -----------



// ----------- 5.30 -----------



// ----------- 5.31 -----------



// ----------- 5.32 -----------



// ----------- 5.33 -----------



// ----------- 5.34 -----------



// ----------- 5.35 -----------



// ----------- 5.36 -----------



// ----------- 5.37 -----------



// ----------- 5.38 -----------



// ----------- 5.39 -----------



// ----------- 5.40 -----------



// ----------- 5.41 -----------



// ----------- 5.42 -----------



// ----------- 5.43 -----------



// EXAM MARCH 29 -----------------------------------------

//    ------------------------
//
//    cout << "  |   a   b   c   d   e   f   g   h   i   j" << endl;
//    cout << string(43, '-') << endl;
//
//    char upper = 'A';
//    for (int i = 0; i < 10; i++) {
//        char lower = 'a';
//        cout << upper << " |";
//        for (int j = 0; j < 10; j++) {
//            cout << setw(3) << upper << lower;
//            lower++;
//        }
//        cout << endl;
//        upper++;
//    }
//
//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------



//    ------------------------

    return 0;
}