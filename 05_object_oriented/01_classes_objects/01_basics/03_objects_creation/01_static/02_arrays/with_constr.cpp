#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n; 
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student st[2] = { 
        Student("Diana", 24), 
        Student("Eve", 19) 
    };

    for (int i = 0; i < 2; i++) {
        st[i].display();
    }
}
