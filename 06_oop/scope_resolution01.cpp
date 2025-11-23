#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    
    void display();  // Declaration only
};

// Definition using scope resolution
void Student::display() {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    Student s("Naimuddin", 22);
    s.display();
    return 0;
}
