#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n) : name(n) {}
};

int main() {
    Student* arr = new Student[2] { Student("Bob"), Student("Carol") };

    for (int i = 0; i < 2; i++) cout << arr[i].name << endl;

    delete[] arr; // free memory
}
