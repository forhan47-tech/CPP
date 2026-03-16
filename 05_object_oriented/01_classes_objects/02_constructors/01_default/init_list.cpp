#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() : name("NoName"), age(-1) {}  // initializer list

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;   // calls default constructor
    s1.display(); 
}
