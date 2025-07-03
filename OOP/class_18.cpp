#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) : name(n), roll(r), marks(m) {}

    // Display method
    void printDetails() const {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    // Array of Student objects using initializer list
    Student students[] = {
        Student("Alice", 101, 89.5f),
        Student("Bob", 102, 76.25f),
        Student("Charlie", 103, 92.0f)
    };

    cout << "Student Details:\n";
    for (const auto& s : students) {
        s.printDetails();
        cout << endl;
    }

    return 0;
}
