#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person() : name("Alice") {}
};

int main() {
    Person* p1 = new Person(); // allocate object
    cout << p1->name << endl;
    delete p1; // free memory
}
