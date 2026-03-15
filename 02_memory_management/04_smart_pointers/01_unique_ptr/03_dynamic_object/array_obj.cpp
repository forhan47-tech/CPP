#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    Student(string n) : name(n) {}
    ~Student() { cout << name << " destroyed\n"; }
};

int main() {
    unique_ptr<Student[]> st(new Student[2] { Student("Carol"), Student("David") });

    for (int i = 0; i < 2; i++) cout << st[i].name << endl;
} 
