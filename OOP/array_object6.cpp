#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Constructor to initialize Student
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student arr[2];

    arr[0] = Student(101, "Rahim");
    arr[1] = Student(102, "Karim");

    for (int i = 0; i < 2; ++i) {
        arr[i].display();
    }

    return 0;
}
