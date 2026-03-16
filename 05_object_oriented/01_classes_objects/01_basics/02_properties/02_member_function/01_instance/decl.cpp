#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;  // member function
    }
};

int main() {
    Student s1, s2;

    s1.name = "Alice"; s1.age = 20;
    s2.name = "Bob";   s2.age = 22;

    s1.display();   
    s2.display(); 
}
