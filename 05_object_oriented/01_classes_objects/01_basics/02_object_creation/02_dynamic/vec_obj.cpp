#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    vector<Student> stu;

    stu.emplace_back("Diana", 24);   // constructs object in place
    stu.emplace_back("Eve", 19);

    for (auto& s : stu) {
        s.display();
    }
}
