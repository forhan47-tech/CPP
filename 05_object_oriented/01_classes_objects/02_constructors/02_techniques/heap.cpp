#include <iostream>
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
    Student* s1 = new Student("Diana", 24);   // dynamic object
    s1->display();
    delete s1;   // free memory
}
