#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;   // member function
    }
};

int main() {
    Student s1("Alice", 20);
    s1.display();   
}
