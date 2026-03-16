#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    unique_ptr<Student> s1 = make_unique<Student>();
    s1->name = "Diana";
    s1->age = 24;
    s1->display(); 
}
