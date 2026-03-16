#include <iostream>
using namespace std;

class Student {
public:
    const int id;   // data member
    string name;

    Student(int i, string n) : id(i), name(n) {} // initializer list required

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(1, "Alice");
    Student s2(2, "Bob");

    s1.display();
    s2.display();
}
