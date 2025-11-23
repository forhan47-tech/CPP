#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s1;

    cout << "Enter student roll number: ";
    cin >> s1.roll;
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, s1.name);

    cout << "\nStudent Details:\n";
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    return 0;
}
