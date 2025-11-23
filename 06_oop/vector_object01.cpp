#include <iostream>
#include <vector>
using namespace std;

class Student {
    int roll;
    string name;
public:
    Student(int r, string n) : roll(r), name(n) {}

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    vector<Student> s1;

    s1.emplace_back(201, "Ali");
    s1.emplace_back(202, "Hasan");
    s1.emplace_back(203, "Sara");

    for (const auto& s : s1) {
        s.display();
    }
    return 0;
}
