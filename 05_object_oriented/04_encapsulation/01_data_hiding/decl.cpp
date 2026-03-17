#include <iostream>
using namespace std;

class Student {
    int roll;       // hidden data
    string name;   

public:
    void setData(int r, string n) {    // Setter methods
        roll = r;
        name = n;
    }

    void display() {   // Getter methods
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setData(101, "Alice");
    s.display(); 
}
