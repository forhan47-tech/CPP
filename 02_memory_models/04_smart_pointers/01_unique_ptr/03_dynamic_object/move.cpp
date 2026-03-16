#include <iostream>
#include <memory>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
};

int main() {
    auto up1 = make_unique<Person>("Bob");
    auto up2 = std::move(up1); // transfer ownership
    cout << up2->name << endl;
}
