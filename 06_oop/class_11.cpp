#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void output() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();   // Input via class method
    s.output();  // Output via class method
    return 0;
}
