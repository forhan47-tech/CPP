#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;  // 👈 Encapsulated data
    int roll;
    float marks;

public:
    Student(string n, int r, float m) : name(n), roll(r), marks(m) {}

    void printDetails() const {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1("Alice", 101, 89.5f);
    s1.printDetails();
    return 0;
}
