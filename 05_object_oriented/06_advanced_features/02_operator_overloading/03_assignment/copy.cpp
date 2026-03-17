#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
public:
    Student(string n="", int r=0): name(n), roll(r) {}

    Student& operator=(const Student& s) {
        if (this != &s) {   // avoid self-assignment
            name = s.name;
            roll = s.roll;
        }
        return *this;       // return current object for chaining
    }

    void display() { 
        cout << "Name: " << name << ", Roll: " << roll << endl; 
    }
};

int main() {
    Student s1("Alice", 101), s2("Bob", 102);
    s2 = s1;   // uses overloaded =
    s2.display(); 
}
