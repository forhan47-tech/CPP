#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a);   // function phototype
    void display();               
};

void Student::setData(string n, int a) {   // defining function
    name = n;
    age = a;
}

void Student::display() {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    Student s1;
    s1.setData("Alice", 20);   // call member function
    s1.display();

    Student s2;
    s2.setData("Bob", 22);
    s2.display();
}
