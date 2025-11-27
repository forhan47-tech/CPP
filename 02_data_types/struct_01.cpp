#include <iostream>
using namespace std;

struct Student {
    int id;
    char grade;
};

int main() {
    Student s1;       // Declare struct variable
    
    s1.id = 101;      // Assign values
    s1.grade = 'A';

    cout << "Student ID: " << s1.id << endl;
    cout << "Student Grade: " << s1.grade << endl;
    return 0;
}
