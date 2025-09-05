#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s = {"Naimuddin", 101, 87.5};
    s.display();
    return 0;
}
