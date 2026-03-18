#include <iostream>
using namespace std;

class Employee {
public:
    string name;
protected:
    double salary;
};

class Intern : protected Employee {  // protected inheritance
public:
    void setDetails(string n, double s) {
        name = n;       // public becomes protected, accessible inside
        salary = s;     // protected stays protected
    }
    void showDetails() {
        cout << "Intern: " << name << ", Stipend: " << salary << endl;
    }
};

int main() {
    Intern i;
    i.setDetails("Bob", 5000);
    i.showDetails();
    return 0;
}
