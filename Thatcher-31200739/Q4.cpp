#include <iostream>

using namespace std;

int main() {
    
    for (int num = 48; num <= 122; num++) {
        (num % 16 == 15) ? (cout << static_cast<char>(num) << ' ' << endl) : (cout << static_cast<char>(num) << ' ');
    }
    
    cout << endl;
    return 0;
}