#include <iostream>

using namespace std;

int main() {

    int user_num;
    cout << "Please enter a number between 1 and 10: ";
    cin >> user_num;

    while (user_num < 1 || user_num > 10) {
        cout << "ERROR! Please enter a number between 1 and 10: ";
        cin >> user_num;
    }

    switch (user_num) {
        case 1:
            cout << "I" << endl;
            break;
        case 2:
            cout << "II" << endl;
            break;
        case 3:
            cout << "III" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V" << endl;
            break;
        case 6:
            cout << "VI" << endl;
            break;
        case 7:
            cout << "VII" << endl;
            break;
        case 8:
            cout << "VIII" << endl;
            break;
        case 9:
            cout << "IX" << endl;
            break;
        case 10: 
            cout << "X" << endl;
            break;
    }

    return 0;
}