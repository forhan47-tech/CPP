#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void introduce() {
        cout << "Hi, I am " << name << endl;
    }
};

class Student : public Person {
public:
    int roll;
    void show() {
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice";
    s.roll = 101;
    s.introduce();
    s.show();
    return 0;
}
