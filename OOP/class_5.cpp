#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Constructor to initialize roll and name
    Student(int r, string n) : roll(r), name(n) {}

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(105, "Hasan");
    Student* ptr = &s1;

    ptr->display(); // Output: Roll: 105, Name: Hasan

    return 0;
}
