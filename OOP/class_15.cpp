#include <iostream>
#include <vector>
using namespace std;

class Student {
    int roll;
    string name;
public:
    Student(int r, string n) : roll(r), name(n) {}

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    vector<Student> students;

    students.emplace_back(201, "Ali");
    students.emplace_back(202, "Hasan");

    for (Student& s : students) {
        s.display();
    }

    return 0;
}
