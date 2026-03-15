#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {   // constructor
        name = n; 
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Bob", 22);   // object initialized with constructor
    Student s2("Charlie", 23);

    s1.display();
    s2.display();
}
