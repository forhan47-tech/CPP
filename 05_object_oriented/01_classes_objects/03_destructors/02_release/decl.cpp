#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;  
public:
    Student(const char* n) {
        name = new char[strlen(n) + 1];   // allocate memory
        strcpy(name, n);
        cout << "Constructor allocated memory for " << name << endl;
    }

    ~Student() {
        cout << "Destructor freeing memory for " << name << endl;
        delete[] name;   // release memory
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Alice");
    s1.display();

    Student s2("Bob");
    s2.display();

    cout << "End of main function" << endl;
}  
