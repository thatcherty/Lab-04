#include <iostream>
#include <string>

using namespace std;

int main() {

    string user_in;

    cout << "Thank you for contacting your virtual Wi-Fi assistant." << endl;
    cout << "Is your Wi-Fi working properly (yes or no)?" << endl;
    cin >> user_in;

    if (user_in == "no") {
        cout << "Please forget the network and try to reconnect." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "Please restart your computer or other device and try to reconnect." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "Please reboot the router and try to reconnect." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "Please check that all cables on the router are plugged in." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "Please try moving the router to a new location." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "Please check for outages from your service provider." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }
    if (user_in == "no") {
        cout << "You may need a new router. Please contact your service provider at 1-800-ROUTERS." << endl;
        cout << "Did this resolve the issue (yes or no)?" << endl;
        cin >> user_in;
    }

    cout << "Thank you again for contacting your virtual Wi-Fi assistant." << endl;

    return 0;
}