#include <iostream>
using namespace std;

class Employee {
public:
    string name;
protected:
    double salary;
};

class Contractor : private Employee {  // private inheritance
public:
    void setDetails(string n, double s) {
        name = n;       // public becomes private
        salary = s;     // protected becomes private
    }
    void showDetails() {
        cout << "Contractor: " << name << ", Payment: " << salary << endl;
    }
};

int main() {
    Contractor c;
    c.setDetails("Charlie", 8000);
    c.showDetails();
    return 0;
}
