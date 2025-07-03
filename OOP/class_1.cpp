#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;             // Object declaration
    
    s1.roll = 101;
    s1.name = "NAIMUDDIN";

    s1.display();           // Output: Roll: 101, Name: NAIMUDDIN
    return 0;
}
