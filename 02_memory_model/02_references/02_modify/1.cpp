#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
};

int main() {
    Person p("Alice");
    Person& ref = p;

    cout << ref.name << endl; // Alice
    ref.name = "Bob";
    cout << p.name << endl;   // Bob
}
