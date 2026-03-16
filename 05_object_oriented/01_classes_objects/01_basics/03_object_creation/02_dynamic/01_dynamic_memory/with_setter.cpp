#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n; 
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student* s1 = new Student;   // dynamic object
    s1->setData("Diana", 24);
    s1->display();
    delete s1;   // free memory
}
