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
    auto sp1 = make_shared<Person>("Bob"); 
    auto sp2 = sp1; // shared ownership

    cout << sp1->name << " and " << sp2->name << " are the same person\n";
    cout << "Owners: " << sp1.use_count() << endl; 
} 
