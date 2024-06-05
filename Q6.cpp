#include <iostream>
#include <string>

using namespace std;

int main() {

    int num_students;
    string first_student, last_student;

    cout << "Please enter the number of students (between 1 and 25): ";
    cin >> num_students;

    for (int num = 0; num < num_students; num++) {
        string student;
        cout << "Please enter the name of student number " << num + 1 << endl;
        cin >> student;

        if (first_student != "") {
            if (student > last_student) {
                last_student = student;
            }
            else if (student < first_student) {
                first_student = student;
            }
        }
        else {
            first_student = student;
        }

    }

    if (last_student == "") {
        cout << "The only student is " << first_student << endl;
    }
    else {
        cout << "The first student is " << first_student << endl;
        cout << "The last student is " << last_student << endl;
    }
    
    return 0;
}