#include <iostream>
using namespace std;

class Student {   // Base class
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

class Graduate : public Student {   // Derived class
public:
    string dept;

    void showDetails() {
        cout << "Name: " << name << ", Roll: " << roll << ", Department: " << dept << endl;
    }
};

int main() {
    Graduate g1;
    g1.name = "Alice";
    g1.roll = 101;
    g1.dept = "CSE";

    g1.display();      // inherited from Student
    g1.showDetails();  // defined in Graduate
}
