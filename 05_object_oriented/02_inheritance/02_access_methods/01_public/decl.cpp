#include <iostream>
using namespace std;

class Employee {
public:
    string name;     
protected:
    double salary;    
};

class Manager : public Employee {  // public inheritance
public:
    void setDetails(string n, double s) {
        name = n;       // still public
        salary = s;     // still protected
    }
    void showDetails() {
        cout << "Manager: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setDetails("Charlie", 8000);
    m.showDetails();

    m.name = "David";  // allowed
    cout << "Updated Manager: " << m.name << endl;
    return 0;
}
