#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void setData(int r, string n) { // setter function
        roll = r;
        name = n;
    }

    void display() const { // const member function
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s;

    s.setData(101, "Naimuddin"); 
    s.display();
    
    return 0;
}
