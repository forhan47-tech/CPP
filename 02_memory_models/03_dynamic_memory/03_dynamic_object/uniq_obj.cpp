#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
};

int main() {
    Person* p1 = new Person("Alice"); // allocate object
    cout << p1->name << endl;

    delete p1; // free memory
}
