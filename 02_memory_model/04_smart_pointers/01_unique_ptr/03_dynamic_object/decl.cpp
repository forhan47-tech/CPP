#include <iostream>
#include <memory>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
    ~Person() { cout << name << " destroyed\n"; }
};

int main() {
    auto up = make_unique<Person>("Alice");
    cout << up->name << endl;
}
