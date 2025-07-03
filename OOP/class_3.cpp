#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s2{104, "Karim"};       // Uniform initialization
    s2.display();                   // Output: Roll: 104, Name: Karim
    return 0;
}
