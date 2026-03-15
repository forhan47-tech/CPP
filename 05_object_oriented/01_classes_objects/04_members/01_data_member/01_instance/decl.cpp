#include <iostream>
using namespace std;

class Student {
public:
    string name;   // instance data member
    int age;     
};

int main() {
    Student s1, s2;   // two objects

    s1.name = "Alice"; s1.age = 20;
    s2.name = "Bob";   s2.age = 22;

    cout << s1.name << " is " << s1.age << " years old." << endl;
    cout << s2.name << " is " << s2.age << " years old." << endl;
}
