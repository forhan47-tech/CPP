#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

class Manager : public Employee {  // public inheritance
public:
    void showRole() {
        cout << "Manager: " << name << endl;  // name is public, stays public
    }
};

int main() {
    Manager m;
    m.setName("Alice");
    m.showRole();
    return 0;
}
