#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s1 = {102, "Bob", 76.0}; // direct initialization
    Student* ptr = &s1; // pointer to struct
    cout << "ID: " << ptr->id << ", Name: " << ptr->name << ", Marks: " << ptr->marks << endl;
    return 0;
}
