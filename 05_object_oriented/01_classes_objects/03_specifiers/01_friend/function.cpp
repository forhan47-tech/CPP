#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    friend void showDetails(Student s);   // declare function as friend
public:
    Student(int r, string n) : roll(r), name(n) {}
};

void showDetails(Student s) {
    cout << "Roll: " << s.roll << ", Name: " << s.name << endl;  // Accessing private members
}

int main() {
    Student s1(101, "Alice");
    showDetails(s1);   // allowed 
}
