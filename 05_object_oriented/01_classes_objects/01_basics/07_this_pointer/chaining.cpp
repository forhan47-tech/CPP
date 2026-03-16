#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student& setRoll(int r) {
        roll = r;
        return *this;  // Return current object
    }

    Student& setName(string n) {
        name = n;
        return *this;  // Return current object
    }

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setRoll(101).setName("Rahim");  // Method chaining
    s1.display();
    return 0;
}
