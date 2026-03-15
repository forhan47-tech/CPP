#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1 = {103, "Charlie", 92.0};
    s1.display(); // call member function
    return 0;
}
