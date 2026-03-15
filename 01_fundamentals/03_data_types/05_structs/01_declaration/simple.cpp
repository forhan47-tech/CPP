#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s1; // create object
    
    s1.id = 101;
    s1.name = "Alice";
    s1.marks = 89.5;

    cout << "ID: " << s1.id << ", Name: " << s1.name << ", Marks: " << s1.marks << endl;
    return 0;
}
