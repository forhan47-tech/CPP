#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student arr[2] = {
        {101, "Rahim"},
        {102, "Karim"}
    };

    cout << "Student Details:\n";
    arr[0].display();
    arr[1].display();
    return 0;
}
