#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student students[3] = {
        {"Naimuddin", 211},
        {"Ayesha", 212},
        {"Imran", 213}
    };

    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}
