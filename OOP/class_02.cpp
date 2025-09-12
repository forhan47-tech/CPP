#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void setData(int r, string n) { //setter
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setData(102, "Ali");
    s.display();          
    return 0;
}
