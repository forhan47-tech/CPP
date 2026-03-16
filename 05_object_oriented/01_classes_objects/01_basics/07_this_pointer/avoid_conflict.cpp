#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setData(string name, int age) {
        this->name = name;   // using this pointer
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Alice", 20);
    s1.display();
}
