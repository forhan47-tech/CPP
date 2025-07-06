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
    Student arr[2];

    arr[0].roll = 101;  
    arr[0].name = "Rahim";

    arr[1].roll = 102;
    arr[1].name = "Karim";

    arr[0].display();
    arr[1].display();

    return 0;
}
