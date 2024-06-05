#include <iostream>

using namespace std;

int main() {

    const float CAL_PER_MIN = 3.6;

    for (int min = 5; min <= 30; min += 5) {
        cout << min * 3.6 << " calories burned for " << min << " minutes." << endl;
    }

    return 0;
}