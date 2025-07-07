#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name); // safer than cin >> name
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // flush newline from input buffer
    }

    void output() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();   // Encapsulated input
    s.output();  // Encapsulated output
    return 0;
}
