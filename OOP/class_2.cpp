#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student(int r, string n) {      // Constructor
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(103, "Rahim");       // Constructor initialization
    s1.display();                   // Output: Roll: 103, Name: Rahim
    return 0;
}
