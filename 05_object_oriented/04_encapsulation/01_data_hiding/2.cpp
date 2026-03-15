#include <iostream>
using namespace std;

class Employee {
protected:
    int salary;   // protected member
public:
    void setSalary(int s) { 
        salary = s; 
    }
};

class Manager : public Employee {
public:
    void showSalary() {
        cout << "Manager's Salary: " << salary << endl;   // accessible here
    }
};

int main() {
    Manager m;
    m.setSalary(5000);
    m.showSalary();
}
