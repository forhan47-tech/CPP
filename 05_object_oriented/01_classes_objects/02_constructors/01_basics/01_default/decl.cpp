#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {   // default constructor
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;   // calls default constructor
    s1.display();
}
