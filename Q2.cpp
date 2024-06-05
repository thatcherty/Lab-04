#include <iostream>
#include <string>

using namespace std;

int main() {

    string color_1, color_2;

    cout << "Please enter a primary color (all lowercase): ";
    cin >> color_1;

    while ((color_1 != "blue") && (color_1 != "red") && (color_1 != "yellow")) 
    {
        cout << "ERROR! Please enter a primary color_1 (red, blue, or yellow): ";
        cin >> color_1;
    }

    cout << "Please enter a second primary color (all lowercase): ";
    cin >> color_2;

    while ((color_2 != "blue") && (color_2 != "red") && (color_2 != "yellow")) 
    {
        cout << "ERROR! Please enter a second primary color (red, blue, or yellow): ";
        cin >> color_2;
    }

    if (color_1 == "blue") 
    {
        if (color_2 == "red")
            cout << color_1 << " + " << color_2 << " is purple." << endl;
        else if (color_2 == "yellow")
            cout << color_1 << " + " << color_2 << " is green." << endl;
        else
            cout << color_1 << " + " << color_2 << " is blue." << endl;
    }
    else if (color_1 == "red") 
    {
        if (color_2 == "blue")
            cout << color_1 << " + " << color_2 << " is purple." << endl;
        else if (color_2 == "yellow")
            cout << color_1 << " + " << color_2 << " is orange." << endl;
        else
            cout << color_1 << " + " << color_2 << " is red." << endl;
    }
    else 
    {
        if (color_2 == "blue")
            cout << color_1 << " + " << color_2 << " is green." << endl;
        else if (color_2 == "red")
            cout << color_1 << " + " << color_2 << " is orange." << endl;
        else
            cout << color_1 << " + " << color_2 << " is yellow." << endl;
    }
    

    return 0;
}