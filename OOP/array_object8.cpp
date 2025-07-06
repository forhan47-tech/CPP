#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3]; // Array of 3 Student objects

    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].getDetails();
    }

    cout << "\n--- Student List ---\n";
    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}
