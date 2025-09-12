#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student(int r, string n) : roll(r), name(n) {}

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(105, "Hasan");
    Student* ptr = &s1;

    ptr->display(); 

    return 0;
}
