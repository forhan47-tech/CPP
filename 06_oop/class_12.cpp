#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    void output() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s; // Calls constructor to input details

    s.output(); 
    return 0;
}
