#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s1 = {102, "Bob", 76.0}; // direct initialization
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", Marks: " << s1.marks << endl;
    return 0;
}
