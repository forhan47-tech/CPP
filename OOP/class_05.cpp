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
    
    ptr->display();               
    return 0;
}
