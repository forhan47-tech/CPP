#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;

public:   
    void set(string n, int i) {
        name = n;
        id = i;
    }

    void show() const {
        cout << "Employee: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee* team = new Employee[2];  // Dynamic allocation

    team[0].set("Fahim", 201);
    team[1].set("Sadia", 202);

    for (int i = 0; i < 2; ++i)
        team[i].show();

    delete[] team;  // Clean up memory
    return 0;
}
