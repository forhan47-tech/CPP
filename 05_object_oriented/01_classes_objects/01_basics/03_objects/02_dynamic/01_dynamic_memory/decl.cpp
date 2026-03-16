#include <iostream>
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
    Student* s1 = new Student;   // dynamic object
    s1->name = "Diana";
    s1->age = 24;
    s1->display();
    delete s1;   // free memory
}
