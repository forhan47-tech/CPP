#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    
    void setName(string n) {
        name = n;
    }
};

class Manager : protected Employee {  // protected inheritance
public:
    void assignName(string n) {   // wrapper function
        setName(n);             
    }
    void showRole() {
        cout << "Manager: " << name << endl;  // accessible inside Manager
    }
};

int main() {
    Manager m;
    m.assignName("Alice");        // use wrapper
    m.showRole();
    return 0;
}
