#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;  // Resolves shadowing
        this->age = age;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("NAIMUDDIN", 22);
    s.show();
    return 0;
}
