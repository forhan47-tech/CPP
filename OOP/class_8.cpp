#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student arr[2];

    for (int i = 0; i < 2; ++i) {
        cout << "Enter roll and name for student " << (i + 1) << ": ";
        cin >> arr[i].roll >> arr[i].name;
    }

    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < 2; ++i) {
        arr[i].display();
    }

    return 0;
}
