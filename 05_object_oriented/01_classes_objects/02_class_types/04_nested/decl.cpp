#include <iostream>
using namespace std;

class University {
public:
    class Student {   // Nested class
        string name;
        int roll;
    public:
        Student(string n, int r) : name(n), roll(r) {}
        
        void display() {
            cout << "Name: " << name << ", Roll: " << roll << endl;
        }
    };
};

int main() {
    University::Student s1("Alice", 101);
    s1.display();
}
