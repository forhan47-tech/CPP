#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Employee : virtual public Person { };   // virtual inheritance
class Student : virtual public Person { };   

class Manager : public Employee, public Student {
public:
    void setName(string n) {
        name = n;   // only one copy of 'Person'
    }
    void show() {
        cout << "Manager Name: " << name << endl;
    }
};

int main() {
    Manager m;
    m.setName("Alice");
    m.show();
    return 0;
}
