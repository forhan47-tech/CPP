#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    Student(int r, const string& n) : roll(r), name(n) {}

    void show() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student* ptr = new Student(101, "Naimuddin");

    ptr->show();
    delete ptr;
    return 0;
}
