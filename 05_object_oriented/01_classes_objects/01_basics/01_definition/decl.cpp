#include <iostream>
using namespace std;

class Student {
public:  
    string name;  // data member
    int age;

    void display() {   // member function
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;   // object
    s1.name = "Alice";
    s1.age = 20;
    s1.display();
}
