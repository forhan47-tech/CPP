#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;
public:
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Deep copy constructor
    Student(const Student &s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    ~Student() { 
        delete[] name; // destructor
    } 
};

int main() {
    Student s1("Charlie");
    Student s2 = s1;   // deep copy constructor called

    s1.display();
    s2.display();
}
