#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;  // 👈 Encapsulated data
    int roll;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void printDetails() const {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData("Naimuddin", 202, 95.25f);
    s.printDetails();
    return 0;
}
