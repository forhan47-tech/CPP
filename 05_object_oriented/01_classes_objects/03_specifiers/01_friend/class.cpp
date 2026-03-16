#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    friend class Teacher;   // declare class as friend
public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }
};

class Teacher {
public:
    void showInfo(Student &s) {
        cout << "Roll No: " << s.roll << ", Name: " << s.name << endl;   // Accessing private members
    }
};

int main() {
    Student s1(101, "Rahim");
    Teacher t1;
    t1.showInfo(s1);   // allowed
    return 0;
}
