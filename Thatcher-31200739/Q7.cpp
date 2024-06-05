#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    int guess, num = 1 + rand() % 100;

    cout << "Please guess a number between 1 and 100: ";
    cin >> guess;

    while (guess != num) {
        if (guess < num) {
            cout << "Too low, try again." << endl;
            cin >> guess;
        }
        else if (guess > num) {
            cout << "Too high, try again." << endl;
            cin >> guess;
        }
    }

    cout << "You got it! The number was " << num << "!" << endl;

    return 0;
}