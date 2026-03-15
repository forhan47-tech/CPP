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
    auto sp = make_shared<Person>("David");
    cout << sp->name << endl;

    sp.reset(); // release ownership
    if (!sp) cout << "Pointer is empty\n";
} 
