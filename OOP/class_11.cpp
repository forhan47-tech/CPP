#include <iostream>
using namespace std;

class Student {
public:
    void display();  // Declaration only
};

// Definition using scope resolution
void Student::display() {
    cout << "Scope resolution in action!" << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}
