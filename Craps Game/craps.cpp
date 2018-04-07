#include <iostream>
#include <random>

using namespace std;

bool craps(bool print = false);
void result(bool print, int d1, int d2, bool win, int point = 0);

int main() {
    int wins = 0;
    unsigned long int plays;
    bool play;

    cout << "Play (1) or Simulate (0)? ";
    cin >> play;

    if (!play) {
        cout << "Simulate how many times? ";
        cin >> plays;
        for (int i = 0; i < plays; i++) {
            if (craps()) wins++;
        }
        cout << "You won " << wins << " out of " << plays << "!" << endl;
        printf("%s%.2f%s", "That is a ", ((wins / static_cast<double>(plays)) * 100), "% win rate.");
    } else craps(true);

    return 0;
}

bool craps(bool print) {
    //time wasn't incrementing fast enough, resulted in 100% win or losses when using srand(time)
    //new rng credit: https://stackoverflow.com/users/1287251/cornstalks
    mt19937 rng;
    rng.seed(random_device()());
    uniform_int_distribution<mt19937::result_type> dist6(1, 6);

    int die = dist6(rng);
    int dice = dist6(rng) + die;

    if (dice < 0 || 12 < dice) {
        throw logic_error("Dice outside of bounds");
    }

    if (dice == 2 || dice == 3 || dice == 12) { //craps
        result(print, die, (dice - die), false);
        return false;
    } else if (dice == 7 || dice == 11) { //natural
        result(print, die, (dice - die), true);
        return true;
    } else { //point
        result(print, die, (dice - die), false, dice);
        while (true) {
            //roll some more
            int ndie = dist6(rng);
            int ndice = dist6(rng) + ndie;

            if (ndice == 7) {
                result(print, ndie, (ndice - ndie), false);
                return false;
            } else if (ndice == dice) {
                result(print, ndie, (ndice - ndie), true);
                return true;
            }
        }
    }
}

void result(bool print, int d1, int d2, bool win, int point) {
    if (print) {
        cout << "You rolled " << d1 << " + " << d2 << " = " << (d1 + d2) << endl;

        if (!point)
            cout << "You " << (win ? "win" : "lose") << endl;
        else
            cout << "Point is " << point << endl;
    }
}