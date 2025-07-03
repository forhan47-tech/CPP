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
    Student s1;
    Student* ptr = &s1;

    ptr->roll = 105;
    ptr->name = "Hasan";
    ptr->display();                // Output: Roll: 105, Name: Hasan
    return 0;
}
