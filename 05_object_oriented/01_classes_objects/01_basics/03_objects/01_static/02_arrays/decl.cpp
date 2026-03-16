#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n; 
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student stu[2];   // array of objects

    stu[0].setData("Eve", 19);
    stu[1].setData("Frank", 21);

    for (int i = 0; i < 2; i++) {
        stu[i].display();
    }
}
