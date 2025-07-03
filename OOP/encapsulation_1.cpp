#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;  // 👈 Encapsulated data
    int roll;
    float marks;

public:
    // Public method to set student details
    void setDetails(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    // Public method to print student details
    void printDetails() const {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1, s2;  

    s1.setDetails("Alice", 101, 89.5f);
    s2.setDetails("Bob", 102, 76.25f);

    cout << "Student Details:\n";
    s1.printDetails();
    s2.printDetails();

    return 0;
}
