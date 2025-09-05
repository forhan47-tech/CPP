#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee emp[2];

    // Input section
    for (int i = 0; i < 2; i++) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, emp[i].name);
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Salary: $";
        cin >> emp[i].salary;
        cin.ignore(); // Clear newline for next getline
        cout << endl;
    }

    // Output section
    for (int i = 0; i < 2; i++) {
        cout << "Employee " << i + 1 << " - Name: " << emp[i].name
             << ", ID: " << emp[i].id
             << ", Salary: $" << emp[i].salary << endl;
    }

    return 0;
}
