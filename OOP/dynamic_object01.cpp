#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void show() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student* ptr = new Student();  // Object created on heap

    ptr->roll = 101;
    ptr->name = "Naimuddin";
    
    ptr->show();
    delete ptr;
    return 0;
}
