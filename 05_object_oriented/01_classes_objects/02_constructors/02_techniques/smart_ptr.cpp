#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n; age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    unique_ptr<Student> s1 = make_unique<Student>("Diana", 24);
    s1->display(); 
}
