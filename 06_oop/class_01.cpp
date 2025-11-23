#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s1;             // Object declaration
    
    s1.roll = 101;
    s1.name = "NAIMUDDIN";

    cout << "Name: " << s1.name << endl; // Direct access to public member
    cout << "Roll: " << s1.roll << endl;
    return 0;
}
