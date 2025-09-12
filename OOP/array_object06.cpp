#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    void show() const {
        cout << "Employee: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee* team = new Employee[2] {
        {"Fahim", 201},
        {"Sadia", 202}
    };

    for (int i = 0; i < 2; ++i)
        team[i].show();

    delete[] team;
    return 0;
}
