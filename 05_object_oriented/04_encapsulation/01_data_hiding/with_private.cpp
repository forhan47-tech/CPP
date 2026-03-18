#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;

public:
    void setName(string n) { 
        name = n; 
    }

    void setSalary(double s) {
        if (s > 0) {
            salary = s;
        }
    }

    string getName() { 
        return name; 
    }

    double getSalary() { 
        return salary; 
    }
};

int main() {
    Employee e;
    e.setName("Bob");
    e.setSalary(5000);

    cout << "Employee: " << e.getName() << ", Salary: " << e.getSalary() << endl;
}
