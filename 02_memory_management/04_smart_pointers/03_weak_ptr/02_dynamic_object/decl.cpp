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
    auto sp = make_shared<Person>("Alice");
    weak_ptr<Person> wp = sp; // weak reference

    if (auto sp = wp.lock()) { // safely access
        cout << sp->name << endl;
    }
}
