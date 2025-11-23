#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:    
    void setInfo(string n, int r) {
        name = n;
        roll = r;
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student students[3];

    students[0].setInfo("Naimuddin", 101);
    students[1].setInfo("Ayesha", 102);
    students[2].setInfo("Imran", 103);

    for (int i = 0; i < 3; ++i)
        students[i].display();

    return 0;
}
