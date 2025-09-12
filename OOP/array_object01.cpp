#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student arr[2];  // Declaring array of 3 Student objects

    arr[0].roll = 101;  
    arr[0].name = "Rahim";

    cout << "Student Details:\n";
    cout << "Roll: " << arr[0].roll << ", Name: " << arr[0].name << endl;
    return 0;
}
