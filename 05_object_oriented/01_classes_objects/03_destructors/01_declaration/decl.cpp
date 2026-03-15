#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl; // Destructor
    }
};

int main() {
    Student s1("Alice");   // constructor runs
    Student s2("Bob");     // constructor runs
    cout << "End of main function" << endl;
}  
