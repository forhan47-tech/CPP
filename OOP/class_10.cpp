#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r);     // Constructor declaration
    void display();     // Member function declaration
};

// Scope resolution to define constructor
Student::Student(int r) {
    roll = r;
}

// Scope resolution to define member function
void Student::display() {
    cout << "Roll: " << roll << endl;
}

int main() {
    Student s(2025);  // Object created on stack
    s.display();
    return 0;
}
