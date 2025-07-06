#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float grade;

    // Constructor with multiple parameters
    Student(string n, int r, float g) : name(n), roll(r), grade(g) {}

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Create Student objects
    Student s1("Naimuddin", 101, 9.2);
    Student s2("Ayesha", 102, 8.7);

    // Display student information
    s1.display();
    cout << endl;
    s2.display();

    return 0;
}
