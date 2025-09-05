#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee emp[2] = { {"John", 101, 5000.5}, {"Emily", 102, 6200.0} };

    for (int i = 0; i < 2; i++) {
        cout << "Employee " << i + 1 << " - Name: " << emp[i].name
             << ", ID: " << emp[i].id
             << ", Salary: $" << emp[i].salary << endl;
    }

    return 0;
}
