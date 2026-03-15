#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {   // parameterized constructor
        name = n; 
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20);   // calls parameterized constructor
    Student s2("Bob", 22);
    s1.display();
    s2.display();
}
