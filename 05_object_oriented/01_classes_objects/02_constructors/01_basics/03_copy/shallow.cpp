#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n; 
        age = a;
    }

    Student(const Student &s) {   // copy constructor
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Charlie", 23);
    Student s2 = s1;   // calls copy constructor
    s2.display();
}
