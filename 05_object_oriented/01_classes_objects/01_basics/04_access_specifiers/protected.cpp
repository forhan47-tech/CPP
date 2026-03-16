#include <iostream>
using namespace std;

class Person {
protected:
    string name;   // protected member
public:
    void setName(string n) { name = n; }
};

class Student : public Person {
public:
    void display() {
        cout << "Name: " << name << endl;   // accessible in derived class
    }
};

int main() {
    Student s1;
    s1.setName("Bob");
    s1.display();
}
