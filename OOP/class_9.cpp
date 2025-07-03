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

    for (int i = 0; i < 2; ++i) {
        arr[i].display();
    }

    return 0;
}
