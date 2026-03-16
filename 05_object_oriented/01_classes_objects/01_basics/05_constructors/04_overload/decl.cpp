#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() { 
        name = "Unknown"; // default
        age = 0; 
    }  

    Student(string n) { // one parameter
        name = n; 
        age = 0; 
    } 

    Student(string n, int a) { // two parameters
        name = n; 
        age = a; 
    }  

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Alice");
    Student s3("Bob", 22);

    s1.display();
    s2.display();
    s3.display();
}
